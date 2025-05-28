#pragma once
#include<iostream>
#include<string>

using namespace std;

class Asignatura{
    private:
        string nombre;
        int cuatrimestre;
        float dificultad_esperada;
    public:
        Asignatura();
        Asignatura(string nombre, int cuatrimeste, float dificultad_esperada);
        string toString();
        void setNombre(string nombre);
        void setCuatrimestre(int cuatrimestre);
        void setDificultad(float dificultad_esperada);
        Asignatura& operator=(const Asignatura& other);
        friend ostream& operator<<(ostream& os, Asignatura& other);
        bool operator<(Asignatura& other);
        bool operator>(Asignatura& other);

};