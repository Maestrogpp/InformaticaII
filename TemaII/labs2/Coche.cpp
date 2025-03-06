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
	//Se comprueba si el coche pasa de estar aparcado(veocidad 0) a encendido o si simplemente esta haciendo contacto la llave
	if(encendido == false){
		velocidad = 0;
	}
	encendido = true;
};

void Coche::apagar(){
	//para apagar el cohe es necesario que este quieto
	if(velocidad == 0){
		encendido = false;
	}
}

void Coche::frenar(double decremento){
	//El coche necesita estar en funcionamiento y no puede ir a una velocidad negativa
	if(encendido == true && (velocidad-decremento) >= 0){
		velocidad = velocidad - decremento;
	}
}

void Coche::acelerar(double incremento){
	//El coche necesita estar en funcionamiento y no puede superar su velocidad maxima
	if(encendido == true && (velocidad+incremento) <= velocidadMaxima){
		velocidad = velocidad + incremento;
	}
}

bool Coche::isEncendido(){
	return encendido;
}

double Coche::obtenerVelocidad(){
	//no es necesario obtener la velocidad de un coche que se encuentra aparcado y apagado
	if(encendido == true){
		return velocidad;
	}else{
		return 0;
	}	
}