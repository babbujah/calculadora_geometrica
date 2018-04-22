#include "controlador.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char* argv[]){
/*
    cout << "Quantidade arguentos: " << argc << endl;
    cout << "Argumento 0: " << argv[0] << endl;
    cout << "Argumento 1: " << argv[1] << endl;
    cout << "Argumento 2: " << argv[2] << endl;
*/


    Controlador control( argv, argc );

    return 0;

}