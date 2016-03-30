#include "cvakosresult.h"

CVAKOSResult::CVAKOSResult(QObject *parent) : QObject(parent)
{

}

QString CVAKOSResult::getType(){
    return m_type;
}

void CVAKOSResult::setType(QString type){
    this->m_type = type;
}

long CVAKOSResult::getId(){
    return m_id;
}

void CVAKOSResult::setId(long id){
    this->m_id = id;
}

QString CVAKOSResult::getLabel(){
    return m_label;
}

void CVAKOSResult::setLabel(QString label){
    this->m_label = label;
}

QString CVAKOSResult::getIcon(){
    return m_icon;
}

void CVAKOSResult::setIcon(QString icon){
    this->m_icon = icon;
}

bool CVAKOSResult::getKos(){
    return m_kos;
}

void CVAKOSResult::setKos(bool kos){
    this->m_kos = kos;
}

long CVAKOSResult::getEveId(){
    return m_eveId;
}

void CVAKOSResult::setEveId(long eveId){
    this->m_eveId = eveId;
}






