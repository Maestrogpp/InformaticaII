/* 
Nombre: Felipe Maestro Álvarez
Fecha: 03/03/2025
Docente: Manuel E. Gantiva
Descripción: Tema 2
Puntos: 1, 8, 9
*/
#include"Rectangulo.h"
using namespace std;

//Setters y getters
void Rectangulo::setAlto(float nuevo_alto){
	//Un rectangulo no puede tener un alto negativo
	if (nuevo_alto > 0){
		alto = nuevo_alto;
	}
}

void Rectangulo::setAncho(double nuevo_ancho){
	//Un rectangulo no puede tener un ancho negativo (de manea generica un lado negativo)
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

//UN metodo para cambiar los dos atributos del objeto de una vez
void Rectangulo::cambiarAltoAncho(float nuevo_alto, double nuevo_ancho){
	alto = nuevo_alto;
	ancho = nuevo_ancho;
}
//Metodo para obtener el area de cualquier objeto rectangulo
double Rectangulo::obtenerArea(){
	return alto * ancho;
}