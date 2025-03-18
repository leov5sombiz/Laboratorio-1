/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Aerolínea Copa Airlines
Program: Pasajero.h
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#ifndef PASAJERO_H
#define PASAJERO_H
#include <string>
using namespace std;

class Pasajero
{
    public:
        //contructor y destructor
        Pasajero(string nombre, string cedula, string tipo, int numeroSilla);
        virtual ~Pasajero();

        //sets
        void setNombre(string _nombre);
        void setCedula(string _cedula);
        void setTipo(string _tipo);
        void setNumeroSilla(int _numeroSilla);

        //gets
        string getNombre();
        string getCedula();
        string getTipo();
        int getNumeroSilla();

    protected:

    private:
        //Atributos
        string nombre;
        string cedula;
        string tipo;
        int numeroSilla;
};

#endif // PASAJERO_H
