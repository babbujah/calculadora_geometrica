#ifndef RETANGULO_H
#define RETANGULO_H

#include <iostream>

#define UNID " u"

class Retangulo{
    private:
        double m_largura;
        double m_altura;
        double m_area;
        double m_perimetro;

    public:
        Retangulo( double, double );
        Retangulo( Retangulo &retangulo );
        ~Retangulo();

        friend std::ostream& operator<< ( std::ostream &o, Retangulo const t );

        double getLargura();
        double getAltura();
        double getArea();
        double getPerimetro();
};

#endif