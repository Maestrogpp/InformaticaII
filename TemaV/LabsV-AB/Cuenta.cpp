#include"Cuenta.h"

Cuenta::Cuenta(){
    this->numero = "DEFAULT";
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
    this->saldo += monto;
}

ostream& operator<<(ostream& os, Cuenta& cuenta){
    return os << cuenta.numero + "---Saldo:" + to_string(cuenta.saldo);
}

//getters-setters
string Cuenta::getNumero(){
    return this->numero;
}

float Cuenta::getSaldo(){
    return this->saldo;
}

void Cuenta::setNumero(string numero){
    this->numero = numero;
}

void Cuenta::setSaldo(float Saldo){
    this->saldo = Saldo;
}

string Cuenta::toString(){
    return "Objeto cuenta: " + this->numero + ", " + to_string(this->saldo);
} 
