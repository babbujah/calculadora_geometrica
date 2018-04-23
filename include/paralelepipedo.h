#ifndef PARALELEPIPEDO_H
#define PARALELEPIPEDO_H

#include <iostream>
#include <cmath>

//#include "retangulo.h"

#define UNID " u"

class Paralelepipedo{
    private:
        //Retangulo * m_base;
        double m_base;
        double m_altura;
        double m_profundidade;
        double m_area;
        double m_volume;

    public:
        Paralelepipedo( double, double, double );
        Paralelepipedo( Paralelepipedo &Paralelepipedo );
        ~Paralelepipedo();

        friend std::ostream& operator<< ( std::ostream &o, Paralelepipedo const p );

        //Retangulo* getBase();
        double getBase();
        double getAltura();
        double getProfundidade();
        double getArea();
        double getVolume();
};

#endif