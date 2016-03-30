#ifndef KOSCLIPBOARDLISTENER_H
#define KOSCLIPBOARDLISTENER_H

#include <QObject>
#include <QClipboard>

class Widget;

class ClipBoardListener : public QObject
{
    Q_OBJECT
public:
    explicit ClipBoardListener(QObject *parent = 0);

signals:

public slots:
    void changedSlot(QClipboard::Mode mode);
    void doubleCopyPress();

private:
    QClipboard* board;
    int keyPress;
    Widget* parent;

};

#endif // KOSCLIPBOARDLISTENER_H
