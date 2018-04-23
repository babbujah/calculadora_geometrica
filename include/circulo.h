/**
 * @file	circulo.h
 * @brief	Implementação da classe Circulo em C++
 * @author	Bruno César L. Silva
 * @since	21/04/2018
 * @date	22/04/2018
 * @sa		SIGAA
 */


        /**
        * @brief Sobrecarga do operador de inserção
        * @detail imprime na saída padrão as informações do Jogador
        * @param ostream &o operador de inserção
        * @param Jogador j uma instância de jogador
        * @return retorna a instância do operador de inserção
        */
#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>

#define UNID " u.m." /**< constante que define qual a representação da unidade de medida*/
#define PI 3.1415 /**< define a constante PI = 3.1415*/

class Circulo{
    private:
        double m_raio; /**< define o raio do circulo*/
        double m_area; /**< define o area do circulo*/
        double m_circunferencia; /**< define a circunferência do circulo*/

    public:
        
        /**
        * @brief Método construtor de Círculo
        * @param double - raio do Círculo
        */  
        Circulo( double );

        /**
        * @brief Método construtor cópia de Circulo
        * @param Circulo circulo - posição de memória de um circulo instanciado previamente
        */
        Circulo( Circulo &circulo );

        /**
        * @brief Método destrutor de Círculo
        */
        ~Circulo();

        /**
        * @brief Sobrecarga do operador de inserção.
        * @detail imprime na saída padrão as informações do Círculo
        * @param ostream &o operador de inserção
        * @param Circulo c uma instância de circulo
        * @return retorna a instância do operador de inserção
        */
        friend std::ostream& operator<< ( std::ostream &o, Circulo const c );

        /**
        * @brief Método get de raio
        * @return Retorna o raio do círculo
        */
        double getRaio();
        /**
        * @brief Método get de area
        * @return Retorna o area do círculo
        */
        double getArea();
        /**
        * @brief Método get de circunferencia
        * @return Retorna o circunferencia do círculo
        */
        double getCircunferencia();
};

#endif