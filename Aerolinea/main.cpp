/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Aerolínea Copa Airlines
Program: main.cpp
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#include "Aerolinea.h"
#include <iostream>
using namespace std;

string almacenarDato(string message)
{
    string dato = "";
    cout << message;
    getline(cin, dato);
    return dato;
}

int main()
{
    Aerolinea aerolinea;

    int opcion;

    do {
        cout << "\n1. Crear vuelo" << endl;
        cout << "2. Insertar Pasajero" << endl;
        cout << "3. Mostrar Pasajeros por tipo de sillas" << endl;
        cout << "4. Consultar numero de silla por cedula" << endl;
        cout << "5. Salir" << endl;
        cout << "\nSeleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 1){

            int numeroVuelo = stoi(almacenarDato("\nIngrese numero de vuelo: "));
            int sillasTurista = stoi(almacenarDato("Ingrese cantidad de sillas turista: "));
            int sillasEjecutivas = stoi(almacenarDato("Ingrese cantidad de sillas ejecutivas: "));
            aerolinea.crearVuelo(numeroVuelo, sillasTurista, sillasEjecutivas);
            cout << "Vuelo creado exitosamente.\n" << endl;
        }

        else if (opcion == 2){

            int numeroVuelo;
            cout << "\nIngrese numero de vuelo: "; cin >> numeroVuelo;
            cin.ignore();
            Avion& avion = aerolinea.obtenerAvion(numeroVuelo);
            string nombre = almacenarDato("Ingrese nombre: ");
            string cedula = almacenarDato("Ingrese cedula: ");
            string tipo = almacenarDato("Ingrese tipo de silla [ turista - ejecutivo ]: ");
            avion.insertarPasajero(nombre, cedula, tipo);
        }

        else if (opcion == 3){

            int numeroVuelo;
            string tipo;
            cout << "\nIngrese numero de vuelo: "; cin >> numeroVuelo;
            cin.ignore();
            Avion avion = aerolinea.obtenerAvion(numeroVuelo);
            cout << "Ingrese tipo de sillas a imprimir [ turista - ejecutivo ]: "; getline(cin, tipo);
            avion.mostrarPasajeros(tipo);
        }

        else if (opcion == 4){

            int numeroVuelo;
            cout << "\nIngrese numero de vuelo: "; cin >> numeroVuelo;
            cin.ignore();
            Avion avion = aerolinea.obtenerAvion(numeroVuelo);
            string cedula = almacenarDato("Ingrese cedula: ");
            int silla = avion.obtenerSillaPorCedula(cedula);
            if (silla != -1) {
                cout << "El numero de silla es: #" << silla << endl;
            } else {
                cout << "Pasajero no encontrado." << endl;
            }
        }
    } while (opcion != 5);

    return 0;
}
