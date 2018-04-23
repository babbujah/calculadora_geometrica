#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <string>
#include <iostream>
#include <fstream>

#include "triangulo.h"
#include "retangulo.h"
#include "circulo.h"
#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

using std::cout;
using std::endl;
using std::string;

class Controlador{
    private:
        string m_forma;
        int m_qntParametro;

    public:
        Controlador( char* [], int );
        ~Controlador();

        void run( char* []);
        void manual();
        void erroParam();

};

#endif