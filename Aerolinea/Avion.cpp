/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Aerolínea Copa Airlines
Program: Avion.cpp
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#include "Avion.h"
#include <iostream>
using namespace std;

Avion::Avion(int _numeroVuelo, int _sillasTurista, int _sillasEjecutivas)
{
    numeroVuelo  = _numeroVuelo;
    sillasTurista = _sillasTurista;
    sillasEjecutivas = _sillasEjecutivas;
}

void Avion::setNumVuelo(int _numeroVuelo)
{
    numeroVuelo  = _numeroVuelo;
}
void Avion::setSillasTurista(int _sillasTurista)
{
    sillasTurista  = _sillasTurista;
}
void Avion::setSillasEjecutivas(int _sillasEjecutivas)
{
    sillasEjecutivas  = _sillasEjecutivas;
}

int Avion::getNumVuelo()
{
    return numeroVuelo;
}
int Avion::getSillasTurista()
{
    return sillasTurista;
}
int Avion::getSillasEjecutivas()
{
    return sillasEjecutivas;
}

void Avion::insertarPasajero(string nombre, string cedula, string tipo)
{
    int numeroSilla = pasajeros.size() + 1;
    pasajeros.push_back(Pasajero(nombre, cedula, tipo, numeroSilla));
    cout << "Pasajero agregado exitosamente - Silla #" << numeroSilla << endl;
}
void Avion::mostrarPasajeros(string tipo)
{
    cout << "Pasajeros en clase " << tipo << ":\n";
    for (Pasajero pasajero : pasajeros){
        if (pasajero.getTipo() == tipo){
            cout << "Nombre: " << pasajero.getNombre() << " - Cedula: " << pasajero.getCedula() << " - Silla: #" << pasajero.getNumeroSilla() << endl;
        }
    }
}
int Avion::obtenerSillaPorCedula(string cedula)
{
    for (Pasajero pasajero : pasajeros){
        if (pasajero.getCedula() == cedula) {
            return pasajero.getNumeroSilla();
        }
    } return -1;
}

Avion::~Avion()
{
    //dtor
}
