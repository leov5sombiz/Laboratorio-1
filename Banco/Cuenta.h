/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Banco AV Villas
Program: Cuenta.h
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#ifndef CUENTA_H
#define CUENTA_H
#include "Cliente.h"
#include <string>
using namespace std;

class Cuenta
{
    public:
        //constructor y destructor
        Cuenta(string _accNum, int _saldo);
        virtual ~Cuenta();

        //sets
        void setAccNum(string _accNum);
        void setSaldo(int _saldo);

        //gets
        string getAccNum();
        int getSaldo();

        //consignar y retirar
        void consignar(int monto);
        bool retirar(int monto);

    protected:

    private:
        //Atributos
        string accNum;
        int saldo;
};

#endif // CUENTA_H
