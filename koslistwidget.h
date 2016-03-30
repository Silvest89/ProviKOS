#ifndef KOSLISTWIDGET_H
#define KOSLISTWIDGET_H

#include <QWidget>

namespace Ui {
class KOSListWidget;
}

class KOSListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit KOSListWidget(QWidget *parent = 0);
    ~KOSListWidget();

protected:
    virtual void paintEvent(QPaintEvent*);

private:
    Ui::KOSListWidget *ui;
};

#endif // KOSLISTWIDGET_H
