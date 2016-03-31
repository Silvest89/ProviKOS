#include "koslist.h"
#include "htmldelegate.h"

#include <QTimer>

KOSList::KOSList(QWidget *parent) : QListWidget(parent)
{
    //QStandardItemModel *model = new QStandardItemModel();
    delegate = new HTMLDelegate();
    //this->setModel(model);

    this->setItemDelegate(delegate);
}

void KOSList::addItem(const QString & label){
    QListWidget::addItem(label);
    QTimer::singleShot(10000, this, SLOT(removeKOSEntry()));
}

void KOSList::removeKOSEntry(){
    delete this->takeItem(0);
    if(this->count() == 0)
        ((QWidget*)this->parent())->hide();
}


