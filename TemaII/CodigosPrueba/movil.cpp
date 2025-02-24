#include<string>
#include"movil.h"

using namespace std;

movil::movil(){
    IMEI = 6;
    modelo = "Xiaomi t14";
    numero = 6091;
}
void movil::setIMEI(int imei){
    this->IMEI = imei;
}
void movil::setModelo(string modelo){
    this->modelo = modelo;
}
void movil::setNumero(int numero){
    this->numero = numero;
}
int movil::getIMEI(){
    return this->IMEI;
}
string movil::getModelo(){
    return this->modelo;
}
int movil::getNumero(){
    return this->numero;
}