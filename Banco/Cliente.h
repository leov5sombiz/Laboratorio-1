/*
Laboratorio #1
Clase: Fundamentos de programación orientada a objetos
Grupo: 80
Project: Banco AV Villas
Program: Cliente.h
Date: 13/03/2025
Integrantes:
 - Elbert Leandro Moreno - 2436884
 - Karen Dayana Hoyos    - 2417774
 - Laura Dayana Tascón   - 2438545
 - Jesús Giovanny Mora   - 2439620
*/

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente
{
    public:
        //contructor y destructor
        Cliente(string _name, string _phoneNum, string _idNum);
        virtual ~Cliente();

        //sets
        void setNombre(string _name);
        void setNumCelular(string _phoneNum);
        void setNumCedula(string _idNum);

        //gets
        string getNombre();
        string getNumCelular();
        string getNumCedula();

    protected:

    private:
        //Atributos
        string name;
        string phoneNum;
        string idNum;
};

#endif // CLIENTE_H
