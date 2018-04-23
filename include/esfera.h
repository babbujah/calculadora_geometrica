#ifndef ESFERA_H
#define ESFERA_H

#include <iostream>
#include <cmath>

#define UNID " u.m."
#define PI 3.1415

class Esfera{
    private:
        double m_raio;
        double m_area;
        double m_volume;

    public:
        Esfera( double );
        Esfera( Esfera &esfera );
        ~Esfera();

        friend std::ostream& operator<< ( std::ostream &o, Esfera const e );

        double getRaio();
        double getArea();
        double getVolume();
};

#endif