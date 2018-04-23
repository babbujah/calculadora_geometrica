#ifndef CUBO_H
#define CUBO_H

#include <cmath>

#include "retangulo.h"

#define UNID " u.m."

class Cubo{
    private:
        Retangulo * m_face;
        double m_area;
        double m_volume;

    public:
        Cubo( Retangulo* );
        Cubo( Cubo &cubo );
        ~Cubo();

        friend std::ostream& operator<< ( std::ostream &o, Cubo const c );

        Retangulo* getFace();
        double getArea();
        double getVolume();
};

#endif