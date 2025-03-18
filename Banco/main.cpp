/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Banco AV Villas
Program: main.cpp
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#include <iostream>
#include "Banco.h"
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
    Banco banco;
    int numClientes, numCuentas;

    //Registrar clientes
    cout << "Ingrese el numero de clientes: ";
    cin >> numClientes;
    cin.ignore();

    for (int i = 0; i < numClientes; i++) {
        cout << "\nIngrese los datos del cliente #" << i + 1 << ":";
        string name = almacenarDato("\nNombre: ");
        string phoneNum = almacenarDato("Numero de telefono: ");
        string idNum = almacenarDato("Documento de identidad: ");
        banco.addCliente(name, phoneNum, idNum);
    }

    //Registrar cuentas
    cout << "\nIngrese el numero de cuentas: ";
    cin >> numCuentas;
    cin.ignore();

    for (int i = 0; i < numCuentas; i++) {
        cout << "\nIngrese los datos de la cuenta #" << i + 1 << ":" << endl;
        string accNum = almacenarDato("Digite el numero de cuenta: ");
        int saldo     = stoi(almacenarDato("Digite el saldo de la cuenta: "));
        banco.addCuenta(accNum, saldo);
    }

    int opcion;
    do {
        cout << "\n--- MENU DE OPERACIONES ---\n";
        cout << "1. Consignar dinero\n";
        cout << "2. Retirar dinero\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 1){
            string cuentaNum;
            int monto;
            cout << "Ingrese el numero de cuenta: ";
            getline(cin, cuentaNum);
            cout << "Ingrese el monto a consignar: ";
            cin >> monto;
            cin.ignore();
            banco.consignar(cuentaNum, monto);
        }

        else if (opcion == 2) {
            string cuentaNum;
            int monto;
            cout << "Ingrese el numero de cuenta: ";
            getline(cin, cuentaNum);
            cout << "Ingrese el monto a retirar: ";
            cin >> monto;
            cin.ignore();
            banco.retirar(cuentaNum, monto);
        }
        else if (opcion !=3 && opcion !=2 && opcion !=1){
            cout << "\nOpcion incorrecta, intente nuevamente\n";
        }

    } while (opcion != 3 );

    cout << "\nInforme final:" << endl;
    banco.mostrarClientes();
    banco.mostrarCuentas();
    banco.calcProm();

    return 0;
}
