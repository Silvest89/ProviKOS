#include "widget.h"
#include <QApplication>
#include "clipboardlistener.h"
#include "koslistwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProviKOS w;
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    w.show();

    ClipBoardListener* listener = new ClipBoardListener(&w);

    return a.exec();
}
