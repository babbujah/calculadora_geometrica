#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>

class Triangulo{
    private:
        double m_largura;
        double m_altura;
        double m_area;
        double m_perimetro;

    public:
        Triangulo( double, double );
        Triangulo( Triangulo &triangulo );
        ~Triangulo();

        friend std::ostream& operator<< ( std::ostream &o, Triangulo const t );

        double getLargura();
        double getAltura();
        double getArea();
        double getPerimetro();
};

#endif