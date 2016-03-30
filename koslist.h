#ifndef KOSLIST_H
#define KOSLIST_H

#include <QListWidget>

class HTMLDelegate;

class KOSList : public QListWidget
{
    Q_OBJECT
public:
    explicit KOSList(QWidget *parent = 0);

    HTMLDelegate *delegate;
    void addItem(const QString & label);

private:

signals:

public slots:
    void removeKOSEntry();
};

#endif // KOSLIST_H
