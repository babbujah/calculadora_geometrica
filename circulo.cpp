#include "circulo.h"

Circulo::Circulo( double raio ): m_raio( raio ), m_area( 0 ), m_circunferencia( 0 ){}

Circulo::Circulo( Circulo &circulo ){
    m_raio = circulo.getRaio();
    m_area = circulo.getArea();
    m_circunferencia = circulo.getCircunferencia();
}

Circulo::~Circulo(){}

std::ostream& operator<< ( std::ostream &o, Circulo const c ){
    o << "##### CÍRCULO #####" << std::endl <<
    "-> Raio: " << c.m_raio << UNID << std::endl <<
    "-> Área: " << c.m_area << UNID << std::endl <<
    "-> Circunferência: " << c.m_circunferencia << UNID << std::endl;
    return o;
}

double Circulo::getRaio(){
    return m_raio;
}

double Circulo::getArea(){
    m_area = PI * m_raio * m_raio;
    return m_area;
}

double Circulo::getCircunferencia(){
    m_circunferencia = 2 * PI * m_raio;
    return m_circunferencia;
}