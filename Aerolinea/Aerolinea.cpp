/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Aerolinea Copa Airlines
Program: Aerolinea.cpp
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#include "Aerolinea.h"

Aerolinea::Aerolinea()
{
    //ctor
}

void Aerolinea::crearVuelo(int numeroVuelo, int sillasTurista, int sillasEjecutivas) {
    aviones.push_back(Avion(numeroVuelo, sillasTurista, sillasEjecutivas));
}

Avion& Aerolinea::obtenerAvion(int numeroVuelo) {
    for (Avion& avion : aviones) {
        if (avion.getNumVuelo() == numeroVuelo) {
            return avion;
        }
    }
}

Aerolinea::~Aerolinea()
{
    //dtor
}
