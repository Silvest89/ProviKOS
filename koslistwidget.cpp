#include "koslistwidget.h"
#include "ui_koslistwidget.h"
#include <QPainter>

KOSListWidget::KOSListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KOSListWidget)
{
    ui->setupUi(this);
    this->setStyleSheet("background:transparent;");
    this->setAttribute(Qt::WA_TranslucentBackground);
}

KOSListWidget::~KOSListWidget()
{
    delete ui;
}

void KOSListWidget::paintEvent(QPaintEvent *)
{
 QStyleOption opt;
 opt.init(this);
 QPainter p(this);
 style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
