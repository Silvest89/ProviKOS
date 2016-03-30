#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QNetworkAccessManager>

class KOSListWidget;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QPoint oldPos;
    void mousePressEvent(QMouseEvent *evt)
    {
        oldPos = evt->globalPos();
    }

    void mouseMoveEvent(QMouseEvent *evt)
    {
        const QPoint delta = evt->globalPos() - oldPos;
        move(x()+delta.x(), y()+delta.y());
        oldPos = evt->globalPos();
    }
    KOSListWidget* kosListWidget;

public slots:
    void portraitReply(QNetworkReply *reply);

protected:


private:
    Ui::Widget *ui;
    QNetworkAccessManager *manager;
};

#endif // WIDGET_H
