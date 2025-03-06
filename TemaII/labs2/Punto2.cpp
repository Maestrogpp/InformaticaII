/*
Nombre: Felipe Maestro Álvarez
Fecha: 04/03/2025
Docente: Manuel E. Gantiva
Descripción: Tema 2
Puntos: 11, 15
*/
#include<iostream>
#include"Coche.h"
#include"Hora.h"

using namespace std;

int main(){
	Coche mi_coche;
	Hora reloj;
	bool state;
	string estado;
	
	string color = "Rojo";
	string motor = "v8";
	
	string& ref1 = color;
	string& ref2 = motor;
	mi_coche.setColor(ref1);
	mi_coche.setMotor(ref2);
	mi_coche.setVelocidadMaxima(280);
	
	mi_coche.arrancar();
	if(mi_coche.isEncendido() == 1){
		estado = "encendido";
	}
	reloj.reiniciar(12, 59, 55);
	cout << "El coche esta: " << estado << " Y viaja a una velocidad de: " << mi_coche.obtenerVelocidad() << endl;
	reloj.mostrarHora();
	cout << endl;
	for(int i = 0; i < 5; i++){
		mi_coche.acelerar(4);
		reloj.sumarSegundo(1);
		cout << "El coche esta: " << estado << " Y viaja a una velocidad de: " << mi_coche.obtenerVelocidad() << endl;
		reloj.mostrarHora();
		cout << endl;
	}
	
	for(int i = 0; i < 10; i++){
		mi_coche.frenar(2);
		reloj.sumarSegundo(1);
		cout << "El coche esta: " << estado << " Y viaja a una velocidad de: " << mi_coche.obtenerVelocidad() << endl;
		reloj.mostrarHora();
		cout << endl;
	}
	
	mi_coche.apagar();
	if(mi_coche.isEncendido() == 0){
		estado = "apagado";
	}
	cout << "El coche esta: " << estado << " Y viaja a una velocidad de: " << mi_coche.obtenerVelocidad() << endl;
	reloj.sumarSegundo(1);
	reloj.mostrarHora();
}