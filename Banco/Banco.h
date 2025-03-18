/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Banco AV Villas
Program: Banco.h
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#ifndef BANCO_H
#define BANCO_H
#include "Cuenta.h"
#include "Cliente.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Banco
{
    public:
        //constructor y destructor
        Banco();
        virtual ~Banco();

        // Métodos para agregar clientes y cuentas
        void addCuenta(string accNum, int saldo);
        void addCliente(string name, string phoneNum, string idNum);

        // Mostrar clientes y cuentas
        void mostrarClientes();
        void mostrarCuentas();
        void calcProm();

        //Modificar saldo cuentas
        void consignar(string accNum, int monto);
        void retirar(string accNum, int monto);

    protected:

    private:
        //Atributos
        vector <Cuenta> cuentasBanco;
        vector <Cliente> clientesBanco;
};

#endif // BANCO_H
