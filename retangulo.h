/**
 * @file	retangulo.h
 * @brief	Implementação da classe Retangulo em C++
 * @author	Bruno César L. Silva
 * @since	21/04/2018
 * @date	22/04/2018
 * @sa		SIGAA
 */

#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>
//#include <ctype>

#define UNID " u" /**< constante que define qual a representação da unidade de medida*/

class Retangulo{
    private:
        double m_largura; /**< define a largura do poligono*/
        double m_altura; /**< define a altura do poligono*/
        double m_area; /**< define a area do poligono*/
        double m_perimetro; /**< define o perímetro do poligono*/

    public:
        Retangulo( double, double );
        Retangulo( double );
        Retangulo( Retangulo &retangulo );
        ~Retangulo();

        friend std::ostream& operator<< ( std::ostream &o, Retangulo const t );

        double getLargura();
        double getAltura();
        double getArea();
        double getPerimetro();
};

#endif