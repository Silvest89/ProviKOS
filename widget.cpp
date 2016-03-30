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
#include "koslistwidget.h"

ProviKOS::ProviKOS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProviKOS)
{
    ui->setupUi(this);
    kosListWidget = new KOSListWidget();
    //MoveKOS* moveKOS = new MoveKOS(this);
    //this->installEventFilter(moveKOS);
}

ProviKOS::~ProviKOS()
{
    delete ui;
}
