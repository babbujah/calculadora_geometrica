#include "cubo.h"

Cubo::Cubo( Retangulo* face ): m_face( face ), m_area( 0 ), m_volume( 0 ){}

Cubo::Cubo( Cubo &cubo ){
    m_face = cubo.getFace();
    m_area = cubo.getArea();
    m_volume = cubo.getVolume();
}

Cubo::~Cubo(){
    delete m_face;
}

std::ostream& operator<< ( std::ostream &o, Cubo const c ){
    o << std::endl << "##### CUBO #####" << std::endl <<
    "-> Área dos Lados: " << c.m_face->getArea() << UNID << std::endl <<
    "-> Área: " << c.m_area << UNID << std::endl <<
    "-> Volume: " << c.m_volume << UNID << std::endl;
    return o;
}

Retangulo* Cubo::getFace(){
    return m_face;
}

double Cubo::getArea(){
    m_area = 6 * m_face->getArea();
    return m_area;
}

double Cubo::getVolume(){
    m_volume = pow(m_face->getArea(), 3);
    return m_volume;
}