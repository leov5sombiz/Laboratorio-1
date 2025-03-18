/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Banco AV Villas
Program: Banco.cpp
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#include "Banco.h"
#include "Cuenta.h"
#include "Cliente.h"

Banco::Banco(){}

void Banco::addCuenta(string accNum, int saldo)
{
    cuentasBanco.push_back(Cuenta(accNum, saldo));
}
void Banco::addCliente(string name, string phoneNum, string idNum)
{
    clientesBanco.push_back(Cliente(name, phoneNum, idNum));
}

void Banco::consignar(string accNum, int monto)
{
    for (Cuenta& cuenta : cuentasBanco) {
        if (cuenta.getAccNum() == accNum) {
            cuenta.consignar(monto);
        }
    }
}
void Banco::retirar(string accNum, int monto)
{
    for (Cuenta& cuenta : cuentasBanco) {
        if (cuenta.getAccNum() == accNum) {
            cuenta.retirar(monto);
        }
    }
}

void Banco::mostrarClientes()
{
    cout << "Clientes:" << endl;
    for (Cliente cliente : clientesBanco) {
        cout << "Nombre: "     << cliente.getNombre()
             << " - Celular: " << cliente.getNumCelular()
             << " - Cedula: "  << cliente.getNumCedula() << endl;
    }
}
void Banco::mostrarCuentas()
{
    cout << "Cuentas:" << endl;
    for (Cuenta cuenta : cuentasBanco) {
        cout << "Cuenta: "   << cuenta.getAccNum()
             << " - Saldo: " << cuenta.getSaldo() << endl;
    }
}
void Banco::calcProm()
{
    int salTotal = 0;
    for (Cuenta cuenta : cuentasBanco){
        salTotal += cuenta.getSaldo();
    }
    int promedio = salTotal/cuentasBanco.size();
    cout << "El promedio de saldo de las cuentas es de: $" << promedio << endl;
}

Banco::~Banco(){}
