#include"Persona.h"

Persona::Persona(){
    this->DNI = "DEFAULT";
    this->nombre = "DEFAULT";
}

Persona::Persona(string nombre, string DNI){
    this->DNI = DNI;
    this->nombre = nombre;
}

Persona::Persona(const Persona& otro){
    this->DNI = otro.DNI;
    this->nombre = otro.nombre;
}

bool const Persona::operator==(const Persona& otra){
    if(this->DNI == otra.DNI){
        return true;
    }else{
        return false;
    }
}

ostream& operator<<(ostream& os, const Persona& otra){
    return os << "DNI: " << otra.DNI << "-" << otra.nombre;
}

//getters-Setters
string Persona::getDNI(){
    return this->DNI;
}

string Persona::getNombre(){
    return this->nombre;
}

void Persona::setDNI(string DNI){
    this->DNI = DNI;
}

void Persona::setNombre(string nombre){
    this->nombre = nombre;
}

string Persona::toString(){
    return "Objeto Persona: " + this->nombre + ", " + this->DNI;
}
