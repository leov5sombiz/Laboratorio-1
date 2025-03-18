/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Banco AV Villas
Program: Cliente.cpp
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#include "Cliente.h"
#include <string>
using namespace std;

Cliente::Cliente(string _name, string _phoneNum, string _idNum)
{
     name     = _name;
     phoneNum = _phoneNum;  //contructor
     idNum    = _idNum;
}

void Cliente::setNombre(string _name)
{
    name = _name;
}
void Cliente::setNumCelular(string _phoneNum)
{
    phoneNum = _phoneNum;
}
void Cliente::setNumCedula(string _idNum)
{
    idNum = _idNum;
}

string Cliente::getNombre()
{
    return name;
}
string Cliente::getNumCelular()
{
    return phoneNum;
}
string Cliente::getNumCedula()
{
    return idNum;
}

Cliente::~Cliente()
{
    //destructor
}
