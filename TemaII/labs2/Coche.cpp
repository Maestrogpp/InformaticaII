/* 
Nombre: Felipe Maestro Álvarez
Fecha: 03/03/2025
Docente: Manuel E. Gantiva
Descripción: Tema 2
Puntos: 1, 8, 9
*/
#include"Coche.h"
#include<string>

using namespace std;
//Caracteristicas
void Coche::setColor(string& nuevoColor){
	color = nuevoColor;
}

void Coche::setMotor(string& nuevoMotor){
	motor = nuevoMotor;
}

void Coche::setVelocidadMaxima(double nuevaVelocidadMaxima){
	velocidadMaxima = nuevaVelocidadMaxima;
}

//Funcionalidades
void Coche::arrancar(){
	if(encendido == false){
		velocidad = 0;
	}
	encendido = true;
};

void Coche::apagar(){
	if(velocidad == 0){
		encendido = false;
	}
}

void Coche::frenar(double decremento){
	if(encendido == true && (velocidad-decremento) >= 0){
		velocidad = velocidad - decremento;
	}
}

void Coche::acelerar(double incremento){
	if(encendido == true && (velocidad+incremento) <= velocidadMaxima){
		velocidad = velocidad + incremento;
	}
}

bool Coche::isEncendido(){
	return encendido;
}

double Coche::obtenerVelocidad(){
	if(encendido == true){
		return velocidad;
	}else{
		return 0;
	}	
}