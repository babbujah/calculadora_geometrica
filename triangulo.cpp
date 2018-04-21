#include "triangulo.h"

Triangulo::Triangulo( double largura, double altura ): m_largura( largura ),
    m_altura( altura ), m_area( 0 ), m_perimetro( 0 ){}

Triangulo::Triangulo( Triangulo &triangulo ){
    m_largura = triangulo.getLargura();
    m_altura = triangulo.getAltura();
    m_area = triangulo.getArea();
    m_perimetro = triangulo.getPerimetro();
}

Triangulo::~Triangulo(){}

std::ostream& operator<< ( std::ostream &o, Triangulo const t ){
    o << "##### TRIÂNGULO #####" << std::endl <<
    "-> Largura: " << t.m_largura << UNID << std::endl <<
    "-> Altura: " << t.m_altura << UNID << std::endl <<
    "-> Área: " << t.m_area << UNID << std::endl <<
    "-> Perímetro: " << t.m_perimetro << UNID << std::endl;
    return o;
}

double Triangulo::getLargura(){
    return m_largura;
}

double Triangulo::getAltura(){
    return m_altura;
}

double Triangulo::getArea(){
    m_area = ( m_largura * m_altura )/2;
    return m_area;
}

double Triangulo::getPerimetro(){
    m_perimetro = 3 * m_largura;
    return m_perimetro;
}