#ifndef PIRAMIDE_H
#define PIRAMIDE_H

#include <cmath>

#include "retangulo.h"
#include "triangulo.h"

#define UNID " u"

class Piramide{
    private:
        Retangulo * m_base;
        Triangulo * m_lado;
        double m_area;
        double m_volume;

    public:
        Piramide( Retangulo*, Triangulo* );
        Piramide( Piramide &piramide );
        ~Piramide();

        friend std::ostream& operator<< ( std::ostream &o, Piramide const p );

        Retangulo* getBase();
        Triangulo* getLado();
        double getArea();
        double getVolume();
};

#endif