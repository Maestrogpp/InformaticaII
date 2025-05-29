#include"Cliente.h"

Cliente::Cliente(){
    this-> cuenta = Cuenta();
}

Cliente::Cliente(string nombre, string DNI, Cuenta cuenta) : Persona(nombre, DNI){
    this->cuenta = Cuenta(cuenta);
}

Cliente::Cliente(Persona persona, Cuenta cuenta) : Persona(persona){
    this->cuenta = Cuenta(cuenta);
}

ostream& operator<<(ostream& os, Cliente& cliente){
    return os << cliente.DNI << "-" << cliente.cuenta.getNumero() << "-" << cliente.nombre;
}

//getters-setters 
Cuenta Cliente::getCuenta(){
    return this-> cuenta;
}

void Cliente::setCuenta(Cuenta cuenta){
    this->cuenta = Cuenta(cuenta);
}

string Cliente::toString(){
    return "Objeto Cliente: " + this->DNI + "-" + this->cuenta.getNumero() + "-" + to_string(this->cuenta.getSaldo());
}
