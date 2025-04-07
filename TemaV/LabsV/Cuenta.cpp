/* 
Nombre: Felipe Maestro Álvarez
Fecha: 04/04/2025
Docente: Manuel E. Gantiva
Descripción: Tema 6
Puntos: 2
*/
#include"Cuenta.h"
#include<iostream>
//constructores
Cuenta::Cuenta(){
	this->numero = "ES00000000";
	this->saldo = 0;
}
	
Cuenta::Cuenta(string numero, float saldo){
	this->numero = numero;
	this->saldo = saldo;
}
//operadores
const bool Cuenta::operator<(const Cuenta& otra){
	if(this->saldo < otra.saldo){
		return true;
	}else{
		return false;
	}
}
	
Cuenta Cuenta::operator+(const float& monto){
	Cuenta resultado;
	resultado.saldo = this->saldo + monto;
	return resultado;
}

ostream& operator<<(ostream& os, Cuenta cuenta){
	return os << cuenta.numero + "-" + to_string(cuenta.saldo);
}
//setters-getters
void Cuenta::setNumero(string numero){
	this-> numero = numero;
}
	
void Cuenta::setsaldo(float saldo){
	this-> saldo = saldo;
}
	
string Cuenta::getNumero(){
	return this->numero;
}
	
float Cuenta::getSaldo(){
	return this->saldo;
}
//Organizacion de la informacion en un string
string Cuenta::toString(){
	return "Objeto Cuenta: " + this->numero + ", " + to_string(this->saldo);
}