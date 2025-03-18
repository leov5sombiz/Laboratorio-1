/*
Laboratorio #1
Clase: Fundamentos de programaci�n orientada a objetos
Grupo: 80
Project: Banco AV Villas
Program: Cuenta.cpp
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tasc�n   - 2438545
 - Jes�s Giovanny Mora   - 2439620
*/

#include "Cliente.h"
#include "Cuenta.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

Cuenta::Cuenta(string _accNum, int _saldo)
{
    accNum = _accNum;
    saldo  = _saldo;
}

void Cuenta::setAccNum(string _accNum)
{
    accNum = _accNum;
}
void Cuenta::setSaldo(int _saldo)
{
    saldo = _saldo;
}

void Cuenta::consignar(int monto) {
    if (monto > 0) {
        saldo += monto;
        cout << "Consignacion exitosa. Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Error: La cantidad a consignar debe ser positiva." << endl;
    }

}
bool Cuenta::retirar(int monto) {
    if (monto > 0 && monto <= saldo) {
        saldo -= monto;
        cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
        return true;
    } else {
        cout << "Error: Fondos insuficientes o cantidad inv�lida." << endl;
        return false;
    }
}

string Cuenta::getAccNum()
{
    return accNum;
}
int Cuenta::getSaldo()
{
    return saldo;
}

Cuenta::~Cuenta()
{
    //dtor
}
