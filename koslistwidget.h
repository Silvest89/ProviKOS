#ifndef KOSLISTWIDGET_H
#define KOSLISTWIDGET_H

#include <QWidget>


class KOSList;

namespace Ui {
class KOSListWidget;
}

class KOSListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit KOSListWidget(QWidget *parent = 0);
    ~KOSListWidget();

    KOSList* listWidget;

private:
    Ui::KOSListWidget *ui;
};

#endif // KOSLISTWIDGET_H
