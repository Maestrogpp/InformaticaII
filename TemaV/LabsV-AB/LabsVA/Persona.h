#pragma once
#include<string>
#include<iostream>

using namespace std;

class Persona{
    protected:
    string DNI;
    string nombre;
    public:
    Persona();
    Persona(string nombre, string DNI);
    Persona(const Persona& otro);
    bool const operator==(const Persona& otra);
    friend ostream& operator<<(ostream& os, const Persona& otra);
    //getters-Setters
    string getDNI();
    string getNombre();
    void setDNI(string DNI);
    void setNombre(string nombre);
    virtual string toString();
};