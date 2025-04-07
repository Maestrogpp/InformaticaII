#include"Cuenta.h"
#include<iostream>

Cuenta::Cuenta(){
	this->numero = "ES00000000";
	this->saldo = 0;
}
	
Cuenta::Cuenta(string numero, float saldo){
	this->numero = numero;
	this->saldo = saldo;
}
	
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
	
string Cuenta::toString(){
	return "Objeto Cuenta: " + this->numero + ", " + to_string(this->saldo);
}