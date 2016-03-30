#ifndef KOSIMAGE_H
#define KOSIMAGE_H
#include <QGraphicsView>
#include <QMouseEvent>
#include "widget.h"

class KOSImage : public QGraphicsView
{
    Q_OBJECT
public:
    KOSImage(QWidget *parent = 0);

protected:
    void mousePressEvent(QMouseEvent *evt)
    {
        parent->mousePressEvent(evt);
        //parent->oldPos = evt->globalPos();
    }

    void mouseMoveEvent(QMouseEvent *evt)
    {
        //const QPoint delta = evt->globalPos() - parent->oldPos;
        //parent->move(x()+delta.x(), y()+delta.y());
        //parent->oldPos = evt->globalPos();
        parent->mouseMoveEvent(evt);
    }

private:
    Widget* parent;
};

#endif // KOSIMAGE_H
