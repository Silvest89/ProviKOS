#include "cvaapi.h"

#include <QUrlQuery>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "koschecker.h"

CVAApi::CVAApi(QObject *parent) : QObject(parent)
{
    manager = new QNetworkAccessManager();
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getKOSResponse(QNetworkReply*)));

    connect(this, SIGNAL(sendKOSResponse(QString, bool)), (KOSChecker*)parent, SLOT(getKOSResponse(QString, bool)));
}

void CVAApi::checkKosPilot(QString name){
    QUrl url("http://kos.cva-eve.org/api/");
    QUrlQuery query;
    query.addQueryItem("c", "json");
    query.addQueryItem("type", "pilot");
    query.addQueryItem("q", name);
    //query.addQueryItem("type", "multi");
    query.addQueryItem("icon", "32");
    query.addQueryItem("max", "1");
    query.addQueryItem("offset", "0");
    url.setQuery(query);

    QNetworkRequest request(url);
    manager->get(request);
}

void CVAApi::getKOSResponse(QNetworkReply *reply)
{
    QString data = reply->readAll();

    QJsonDocument jsonResponse = QJsonDocument::fromJson(data.toUtf8());
    QJsonObject jsonObject = jsonResponse.object();
    qDebug() << jsonObject;

    if(jsonObject["total"].toInt() > 0)
    {
        bool kos = false;
        QJsonArray jsonArray = jsonObject["results"].toArray();

        foreach (const QJsonValue & value, jsonArray) {
            QJsonObject obj = value.toObject();
            QJsonObject corp = obj.value(QString("corp")).toObject();
            QJsonObject alliance = corp.value(QString("alliance")).toObject();
            if(obj["kos"].toBool() == true || corp["kos"].toBool() || alliance["kos"].toBool())
                kos = true;

            sendKOSResponse(obj["label"].toString(), kos);
        }
    }
}
