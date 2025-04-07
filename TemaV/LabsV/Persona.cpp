#include"persona.h"
#include<iostream>
#include<string>

using namespace std;

//Constructores
Persona::Persona(){
	this->nombre = "DEFAULT";
	this->DNI = "000000000A";
}

Persona::Persona(string nombre, string DNI){
	this->nombre = nombre;
	this->DNI = DNI;
}

Persona::Persona(const Persona& otra){
	this->nombre = otra.nombre;
	this->DNI = otra.DNI;
}
//Operadores
const bool Persona::operator==(const Persona& otra){
	if(this->DNI == otra.DNI){
		return true;
	}else{
		return false;
	}
}

ostream& operator<<(ostream& os, Persona& persona){
	return os << persona.DNI + "-" + persona.nombre;
}
//setters-getters
void Persona::setDNI(string dni){
	this-> DNI = dni;
}

void Persona::setNombre(string nombre){
	this->nombre = nombre;
}

string Persona::getDNI(){
	return this->DNI;
}

string Persona::getNombre(){
	return this->nombre;
}
//Organizacion de la informacion en un string
string Persona::toString(){
	return "Objeto Persona: " + this-> nombre + ", " + this-> DNI;
}