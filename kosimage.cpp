#include "kosimage.h"


KOSImage::KOSImage(QWidget *parent) : QPushButton(parent)
{
    this->parent = (ProviKOS*)parent;
}

void KOSImage::handleButton(QMouseEvent *evt){
    if(evt->button() == Qt::LeftButton){
        this->setChecked(!this->isChecked());
    }
}
