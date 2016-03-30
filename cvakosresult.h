#ifndef CVAKOSRESULT_H
#define CVAKOSRESULT_H

#include <QObject>

class CVAKOSResult : public QObject
{
    Q_OBJECT
public:
    explicit CVAKOSResult(QObject *parent = 0);

    QString getType();
    void setType(QString type);

    long getId();
    void setId(long id);

    QString getLabel();
    void setLabel(QString label);

    QString getIcon();
    void setIcon(QString icon);

    bool getKos();
    void setKos(bool kos);

    long getEveId();
    void setEveId(long eveId);

protected:
    QString m_type;
    long m_id;
    QString m_label;
    QString m_icon;
    bool m_kos;
    long m_eveId;

signals:

public slots:
};

#endif // CVAKOSRESULT_H
