#include "clipboardlistener.h"

#include <QApplication>
#include <QClipboard>
#include <QMessageBox>
#include <QMimeData>
#include <QTimer>
#include "widget.h"
#include "koslistwidget.h"

ClipBoardListener::ClipBoardListener(QObject *parent) : QObject(parent)
{
    keyPress = 0;
    board = QApplication::clipboard();
    connect(board,SIGNAL(changed(QClipboard::Mode)),this,SLOT(changedSlot(QClipboard::Mode)));
    this->parent = (Widget*)parent;
}

void ClipBoardListener::changedSlot(QClipboard::Mode mode)
{
    qDebug () << "test";
    if(QApplication::clipboard()->mimeData()->hasText())
    {
        keyPress++;
        QTimer::singleShot(500, this, SLOT(doubleCopyPress()));
    }
}

void ClipBoardListener::doubleCopyPress(){
    if(keyPress >= 2){
        keyPress = 0;
        //QMessageBox::information(NULL, "ClipBoard Text Copy Detected!", "You Copied: "+board->text());

        parent->kosListWidget->move(parent->pos().x() + parent->geometry().width(), parent->pos().y());
        parent->kosListWidget->show();
    }
    keyPress = 0;
}
