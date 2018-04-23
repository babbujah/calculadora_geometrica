/** 
 *  @file    retangulo.cpp
 *  @author  Bruno César (bczion)
 *  @date    4/21/2018  
 *  @version 1.0 
 *  
 *  @brief Lab 2, calculos básicos do polígono
 *
 *  @section DESCRIÇÃO
 *  
 *  Calcula a área e perímetro do polígono,
 *  a partir de dados fornecidos pelo usuário.
 *  Imprime os resultados na tela.
 *  
 */

#include "retangulo.h"

Retangulo::Retangulo( double largura, double altura ): m_largura( largura ),
    m_altura( altura ), m_area( 0 ), m_perimetro( 0 ){}

Retangulo::Retangulo( double largura ): m_largura( largura ),
    m_altura( largura ), m_area( 0 ), m_perimetro( 0 ){}

Retangulo::Retangulo( Retangulo &retangulo ){
    m_largura = retangulo.getLargura();
    m_altura = retangulo.getAltura();
    m_area = retangulo.getArea();
    m_perimetro = retangulo.getPerimetro();
}

Retangulo::~Retangulo(){}

std::ostream& operator<< ( std::ostream &o, Retangulo const r ){
    if( r.m_largura == r.m_altura )
        o << std::endl << "##### QUADRADO #####" << std::endl;
    else
        o << std::endl << "##### RETÂNGULO #####" << std::endl;
    o << "-> Largura: " << r.m_largura << UNID << std::endl <<
    "-> Altura: " << r.m_altura << UNID << std::endl <<
    "-> Área: " << r.m_area << UNID << std::endl <<
    "-> Perímetro: " << r.m_perimetro << UNID << std::endl;
    return o;
}

double Retangulo::getLargura(){
    return m_largura;
}

double Retangulo::getAltura(){
    return m_altura;
}

double Retangulo::getArea(){
    m_area = m_largura * m_altura;
    return m_area;
}

double Retangulo::getPerimetro(){
    m_perimetro = 2 * (m_largura + m_altura);
    return m_perimetro;
}