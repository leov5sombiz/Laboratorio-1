/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Aerolínea Copa Airlines
Program: Avion.h
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#ifndef AVION_H
#define AVION_H
#include <vector>
#include "Pasajero.h"

class Avion
{
    public:
        //constructor y destructor
        Avion(int numeroVuelo, int sillasTurista, int sillasEjecutivas);
        virtual ~Avion();

        //sets
        void setNumVuelo(int _numeroVuelo);
        void setSillasTurista(int _sillasTurista);
        void setSillasEjecutivas(int _sillasEjecutivas);

        //gets
        int getNumVuelo();
        int getSillasTurista();
        int getSillasEjecutivas();

        //pasajeros
         void insertarPasajero(string nombre, string cedula, string tipo);
         void mostrarPasajeros(string tipo);
         int obtenerSillaPorCedula(string cedula);

    protected:

    private:
        //Atributos
        int numeroVuelo;
        int sillasTurista;
        int sillasEjecutivas;
        vector <Pasajero> pasajeros;

};

#endif // AVION_H

