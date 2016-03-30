#ifndef KOSCHECKER_H
#define KOSCHECKER_H

#include <QObject>

class CVAApi;
class KOSList;

class KOSChecker : public QObject
{
    Q_OBJECT
public:
    explicit KOSChecker(QObject *parent = 0);

    void checkKOSPilot(QString name);

private:
    CVAApi* cvaApi;
    KOSList* kosList;

signals:

public slots:
    void getKOSResponse(QString name, bool kos);
};

#endif // KOSCHECKER_H
