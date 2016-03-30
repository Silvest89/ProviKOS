#include "koschecker.h"
#include "cvaapi.h"

#include <QDebug>
#include "widget.h"
#include "koslist.h"

KOSChecker::KOSChecker(QObject *parent) : QObject(parent)
{
    cvaApi = new CVAApi(this);
    kosList = ((ProviKOS*)parent)->kosListWidget->listWidget;
}

void KOSChecker::checkKOSPilot(QString name){
    qDebug() << name;
    cvaApi->checkKosPilot(name);
}

void KOSChecker::getKOSResponse(QString name, bool kos){
    qDebug() << kos;
    QString kosStatus;

    if(kos == false){
        kosStatus = "<b><font color=\"green\">"+name+" (Not KOS)</font></b>";
    }
    else
        kosStatus = "<b><font color=\"red\">"+name+" (KOS)</font></b>";

    kosList->addItem(kosStatus);
}
