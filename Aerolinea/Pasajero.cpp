/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Banco AV Villas
Program: Pasajero.cpp
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#include "Pasajero.h"
#include <string>
using namespace std;

Pasajero::Pasajero(string _nombre, string _cedula, string _tipo, int _numeroSilla)
{
    nombre = _nombre;
    cedula = _cedula;
    tipo = _tipo;
    numeroSilla = _numeroSilla;
}

void Pasajero::setNombre(string _nombre)
{
    nombre = _nombre;
}
void Pasajero::setCedula(string _cedula)
{
    cedula = _cedula;
}
void Pasajero::setTipo(string _tipo)
{
    tipo = _tipo;
}
void Pasajero::setNumeroSilla(int _numeroSilla)
{
    numeroSilla = _numeroSilla;
}

string Pasajero::getNombre()
{
    return nombre;
}
string Pasajero::getCedula()
{
    return cedula;
}
string Pasajero::getTipo()
{
    return tipo;
}
int Pasajero::getNumeroSilla()
{
    return numeroSilla;
}

Pasajero::~Pasajero()
{
    //destructor
}
