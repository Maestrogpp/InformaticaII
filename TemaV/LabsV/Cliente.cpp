#include"Cliente.h"

using namespace std;
//Declaracion de constructores 
Cliente::Cliente() : Persona(){
	this->cuenta = Cuenta();
}

Cliente::Cliente(string nombre, string DNI, Cuenta cuenta) : Persona(nombre, DNI){
	this->cuenta = cuenta;
}

Cliente::Cliente(Persona persona, Cuenta cuenta) : Persona(persona){
	this->cuenta = cuenta;
}
//Declaracion de operadores
ostream& operator<<(ostream &os, Cliente& cliente){
	return os << cliente.DNI + "-" + cliente.cuenta.getNumero() + "-" + to_string(cliente.cuenta.getSaldo());
}
//getters-setters
void Cliente::setCuenta(Cuenta cuenta){
	this->cuenta = cuenta;
}

Cuenta Cliente::getCuenta(){
	return this->cuenta;
}
//Organizacion de la informacion en un string
string Cliente::toString(){
	return "Objeto Cliente: " + this-> nombre + ", " + this->DNI + ", " + this->cuenta.getNumero() + ", " + to_string(this->cuenta.getSaldo());
}

