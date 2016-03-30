#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QNetworkAccessManager>

#include "koslistwidget.h"

namespace Ui {
class ProviKOS;
}

class ProviKOS : public QWidget
{
    Q_OBJECT

public:
    explicit ProviKOS(QWidget *parent = 0);
    ~ProviKOS();

    QPoint oldPos;
    void mousePressEvent(QMouseEvent *evt)
    {
        oldPos = evt->globalPos();
    }

    void mouseMoveEvent(QMouseEvent *evt)
    {
        const QPoint delta = evt->globalPos() - oldPos;
        move(x()+delta.x(), y()+delta.y());
        kosListWidget->move(kosListWidget->x() + delta.x(), kosListWidget->y()+delta.y());
        oldPos = evt->globalPos();
    }
    KOSListWidget* kosListWidget;

public slots:

protected:


private:
    Ui::ProviKOS *ui;
    QNetworkAccessManager *manager;
};

#endif // WIDGET_H
