#include "koslistwidget.h"
#include "ui_koslistwidget.h"
#include <QPainter>
#include <QListWidget>

KOSListWidget::KOSListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KOSListWidget)
{
    ui->setupUi(this);
    this->setStyleSheet("background:transparent;");
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::SubWindow | Qt::WindowStaysOnTopHint);

    this->listWidget = this->ui->listWidget;

}

KOSListWidget::~KOSListWidget()
{
    delete ui;
}
