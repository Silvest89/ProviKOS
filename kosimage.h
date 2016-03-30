#ifndef KOSIMAGE_H
#define KOSIMAGE_H
#include <QPushButton>
#include <QMouseEvent>
#include "widget.h"

class KOSImage : public QPushButton
{
    Q_OBJECT
public:
    KOSImage(QWidget *parent = 0);

protected:
    void mousePressEvent(QMouseEvent *evt)
    {
        oldPos = evt->globalPos();
        parent->mousePressEvent(evt);
        //parent->oldPos = evt->globalPos();
        //handleButton(evt);
    }

    void mouseMoveEvent(QMouseEvent *evt)
    {
        //const QPoint delta = evt->globalPos() - parent->oldPos;
        //parent->move(x()+delta.x(), y()+delta.y());
        //parent->oldPos = evt->globalPos();
        parent->mouseMoveEvent(evt);
    }
    void mouseReleaseEvent(QMouseEvent *event){
        if(oldPos == event->globalPos())
            handleButton(event);
    }

    void handleButton(QMouseEvent *evt);

    QPixmap pix;
    QPoint oldPos;

private:
    ProviKOS* parent;
};

#endif // KOSIMAGE_H
