#include "widget.h"
#include "ui_widget.h"

#include <QUrlQuery>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    QUrl url("http://kos.cva-eve.org/api/");
    QUrlQuery query;
    query.addQueryItem("c", "json");
    query.addQueryItem("q", "Johnnie Ho");
    //query.addQueryItem("type", "multi");
    query.addQueryItem("icon", "32");
    url.setQuery(query);
    manager = new QNetworkAccessManager();

    QNetworkRequest request(url);
    manager->get(request);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(portraitReply(QNetworkReply*)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::portraitReply(QNetworkReply *reply)
{
    QString data = reply->readAll();
    QJsonDocument jsonResponse = QJsonDocument::fromJson(data.toUtf8());
    QJsonObject jsonObject = jsonResponse.object();
    QJsonArray jsonArray = jsonObject["results"].toArray();
    qDebug() << jsonObject["total"].toInt();
    foreach (const QJsonValue & value, jsonArray) {
        QJsonObject obj = value.toObject();
        qDebug() << obj["kos"].toBool();
    }


}
