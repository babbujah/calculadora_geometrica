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
    "-> Largura: " << t.m_largura << std::endl <<
    "-> Altura: " << t.m_altura << std::endl <<
    "-> Área: " << t.m_area << std::endl <<
    "-> Perímetro: " << t.m_perimetro << std::endl;
    return o;
}

double Triangulo::getLargura(){
    return m_largura;
}

double Triangulo::getAltura(){
    return m_altura;
}

double Triangulo::getArea(){
    return m_area;
}

double Triangulo::getPerimetro(){
    return m_perimetro;
}