#include "piramide.h"

Piramide::Piramide( Retangulo* base, Triangulo* lado ): m_base( base ),
    m_lado( lado ), m_area( 0 ), m_volume( 0 ){}

Piramide::Piramide( Piramide &piramide ){
    m_base = piramide.getBase();
    m_lado = piramide.getLado();
    m_area = piramide.getArea();
    m_volume = piramide.getVolume();
}

Piramide::~Piramide(){
    delete m_base;
    delete m_lado;
}

std::ostream& operator<< ( std::ostream &o, Piramide const p ){
    o << std::endl << "##### PIRÂMIDE #####" << std::endl <<
    "-> Área da Base: " << p.m_base->getArea() << UNID << std::endl <<
    "-> Área dos Lados: " << 4 * p.m_lado->getArea() << UNID << std::endl <<
    "-> Área: " << p.m_area << UNID << std::endl <<
    "-> Volume: " << p.m_volume << UNID << std::endl;
    return o;
}

Retangulo* Piramide::getBase(){
    return m_base;
}

Triangulo* Piramide::getLado(){
    return m_lado;
}

double Piramide::getArea(){
    m_area = m_base->getArea() + 4 * m_lado->getArea();
    return m_area;
}

double Piramide::getVolume(){
    m_volume = (1.0f/3) * m_base->getArea() * sqrt(m_lado->getLargura() + m_base->getLargura()/2);
    return m_volume;
}