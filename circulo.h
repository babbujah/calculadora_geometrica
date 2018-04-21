#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>

#define UNID " u"
#define PI 3.1415

class Circulo{
    private:
        double m_raio;
        double m_area;
        double m_circunferencia;

    public:
        Circulo( double );
        Circulo( Circulo &circulo );
        ~Circulo();

        friend std::ostream& operator<< ( std::ostream &o, Circulo const c );

        double getRaio();
        double getArea();
        double getCircunferencia();
};

#endif