#ifndef KOSCLIPBOARDLISTENER_H
#define KOSCLIPBOARDLISTENER_H

#include <QObject>
#include <QClipboard>

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

};

#endif // KOSCLIPBOARDLISTENER_H
