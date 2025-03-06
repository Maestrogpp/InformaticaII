/*
Nombre: Felipe Maestro Álvarez
Fecha: 04/03/2025
Docente: Manuel E. Gantiva
Descripción: Tema 2
Puntos: 11, 15
*/
#include"Rectangulo.h"
#include<iostream>

using namespace std;

int main(){
	//inicializacion de los objetos
	Rectangulo rectangulo1, rectangulo2;
	rectangulo1.setAlto(10);
	rectangulo1.setAncho(10);
	rectangulo2.setAlto(10);
	rectangulo2.setAncho(10);
	
	//Primer apartado del ejercicio
	float AreaR1 = rectangulo1.obtenerArea();
	float AreaR2 = rectangulo2.obtenerArea();
	cout << "El area del rectangulo 1 es: " << AreaR1 << " y el del Rectangulo 2: " << AreaR2 << endl;
}