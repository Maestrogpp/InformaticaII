/* 
Nombre: Felipe Maestro Álvarez
Fecha: 03/03/2025
Docente: Manuel E. Gantiva
Descripción: Tema 2
Puntos: 1, 8, 9
*/
#include"Rectangulo.h"
using namespace std;


void Rectangulo::setAlto(float nuevo_alto){
	if (nuevo_alto > 0){
		alto = nuevo_alto;
	}
}

void Rectangulo::setAncho(double nuevo_ancho){
	if(nuevo_ancho > 0){
		ancho = nuevo_ancho;
	}
}

float Rectangulo::getAlto(){
	return alto;
}

double Rectangulo::getAncho(){
	return ancho;
}

void Rectangulo::cambiarAltoAncho(float nuevo_alto, double nuevo_ancho){
	alto = nuevo_alto;
	ancho = nuevo_ancho;
}

double Rectangulo::obtenerArea(){
	return alto * ancho;
}