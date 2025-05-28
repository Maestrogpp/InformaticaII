#include"Asignatura.h"


Asignatura::Asignatura(){
    this->cuatrimestre = 0;
    this->dificultad_esperada = 0;
    this->nombre = "DEFAULT";
}

Asignatura::Asignatura(string nombre, int cuatrimestre, float dificultad_esperada){
    this->cuatrimestre = cuatrimestre;
    this->dificultad_esperada = dificultad_esperada;
    this->nombre = nombre;
}

string Asignatura::toString(){
    return this->nombre + "---" + to_string(this->cuatrimestre) + "---" + to_string(this->dificultad_esperada);
}

void Asignatura::setNombre(string nombre){
    this->nombre = nombre;
}

void Asignatura::setCuatrimestre(int cuatrimestre){
    this->cuatrimestre = cuatrimestre;
}

void Asignatura::setDificultad(float dificultad_esperada){
    this->dificultad_esperada = dificultad_esperada;
}

Asignatura& Asignatura::operator=(const Asignatura& other){
    this->nombre = other.nombre;
    this->cuatrimestre = other.cuatrimestre;
    this->dificultad_esperada = other.dificultad_esperada;
}

ostream& operator<<(ostream& os, Asignatura& other){
    return os << other.nombre << "---" << to_string(other.cuatrimestre) << "---" << to_string(other.dificultad_esperada);
}

bool Asignatura::operator<(Asignatura& other){
    if(this->cuatrimestre < other.cuatrimestre){
        return true;
    }else{
        return false;
    }
}

bool Asignatura::operator>(Asignatura& other){
    if(this->dificultad_esperada > other.dificultad_esperada){
        return true;
    }else{
        return false;
    }
}