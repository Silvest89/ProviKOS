#include "widget.h"
#include <QApplication>
#include "clipboardlistener.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    w.show();

    ClipBoardListener* listener = new ClipBoardListener();

    return a.exec();
}
