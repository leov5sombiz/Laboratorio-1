/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Aerolinea Copa Airlines
Program: Aerolinea.h
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#ifndef AEROLINEA_H
#define AEROLINEA_H
#include <vector>
#include "Avion.h"

class Aerolinea
{
    public:
        //ctor y dtor
        Aerolinea();
        virtual ~Aerolinea();

        //admin. vuelos
        void crearVuelo(int numeroVuelo, int sillasTurista, int sillasEjecutivas);
        Avion& obtenerAvion(int numeroVuelo);

    protected:

    private:
        //Atributos
        vector <Avion> aviones;
};

#endif // AEROLINEA_H
