#include "paralelepipedo.h"

Paralelepipedo::Paralelepipedo( double base, double altura, double profundidade ): m_base( base ),
    m_altura( altura ), m_profundidade( profundidade ), m_area( 0 ), m_volume( 0 ){}

Paralelepipedo::Paralelepipedo( Paralelepipedo &paralelepipedo ){
    m_base = paralelepipedo.getBase();
    m_altura = paralelepipedo.getAltura();
    m_profundidade = paralelepipedo.getProfundidade();
    m_area = paralelepipedo.getArea();
    m_volume = paralelepipedo.getVolume();
}

Paralelepipedo::~Paralelepipedo(){}

std::ostream& operator<< ( std::ostream &o, Paralelepipedo const p ){
    o << std::endl << "##### PARALELEPIPEDO #####" << std::endl <<
    "-> Base: " << p.m_base << UNID << std::endl <<
    "-> Altura: " << p.m_altura << UNID << std::endl <<
    "-> Profundidade: " << p.m_profundidade << UNID << std::endl <<
    "-> Área: " << p.m_area << UNID << std::endl <<
    "-> Volume: " << p.m_volume << UNID << std::endl;
    return o;
}

double Paralelepipedo::getBase(){
    return m_base;
}

double Paralelepipedo::getAltura(){
    return m_altura;
}

double Paralelepipedo::getProfundidade(){
    return m_profundidade;
}

double Paralelepipedo::getArea(){
    m_area = 2 * ( m_base * m_altura + m_base * m_profundidade + m_altura * m_profundidade);
    return m_area;
}

double Paralelepipedo::getVolume(){
    m_volume = m_base * m_altura * m_profundidade;
    return m_volume;
}