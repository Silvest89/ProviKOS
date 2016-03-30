#ifndef CVAAPI_H
#define CVAAPI_H

#include <QObject>
#include <QNetworkAccessManager>

class CVAApi : public QObject
{
    Q_OBJECT
public:
    explicit CVAApi(QObject *parent = 0);

    void checkKosPilot(QString name);

signals:
    void sendKOSResponse(QString name, bool kos);

public slots:
    void getKOSResponse(QNetworkReply *reply);

protected:
    QNetworkAccessManager *manager;

private:
};

#endif // CVAAPI_H
