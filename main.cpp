#include "widget.h"
#include <QApplication>
#include "clipboardlistener.h"
#include "koslistwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    w.show();

    ClipBoardListener* listener = new ClipBoardListener(&w);

    return a.exec();
}
