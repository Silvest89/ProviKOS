#ifndef KOSCLIPBOARDLISTENER_H
#define KOSCLIPBOARDLISTENER_H

#include <QObject>
#include <QClipboard>

class KOSChecker;

class ProviKOS;

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
    ProviKOS* parent;
    KOSChecker* kosChecker;
};

#endif // KOSCLIPBOARDLISTENER_H
