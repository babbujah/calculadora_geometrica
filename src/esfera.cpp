#include "esfera.h"

Esfera::Esfera( double raio ): m_raio( raio ), m_area( 0 ), m_volume( 0 ){}

Esfera::Esfera( Esfera &esfera ){
    m_raio = esfera.getRaio();
    m_area = esfera.getArea();
    m_volume = esfera.getVolume();
}

Esfera::~Esfera(){}

std::ostream& operator<< ( std::ostream &o, Esfera const e ){
    o << std::endl << "##### ESFERA #####" << std::endl <<
    "-> Raio: " << e.m_raio << UNID << std::endl <<
    "-> Área: " << e.m_area << UNID << std::endl <<
    "-> Volume: " << e.m_volume << UNID << std::endl;
    return o;
}

double Esfera::getRaio(){
    return m_raio;
}

double Esfera::getArea(){
    m_area = 4 * PI * pow( m_raio, 2 );
    return m_area;
}

double Esfera::getVolume(){
    m_volume = (4.0f/3) * PI * pow( m_raio, 3 );
    return m_volume;
}