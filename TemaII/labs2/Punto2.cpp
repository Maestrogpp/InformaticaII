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
	//instanciacion de los objetos de las clases
	Coche mi_coche;
	Hora reloj;
	bool state;
	string estado;
	//Se le asigna un valor a los atributos de "mi_coche"
	string color = "Rojo";
	string motor = "v8";
	
	string& ref1 = color;
	string& ref2 = motor;
	mi_coche.setColor(ref1);
	mi_coche.setMotor(ref2);
	mi_coche.setVelocidadMaxima(280);
	
	//Se arranca el coche
	mi_coche.arrancar();
	if(mi_coche.isEncendido() == 1){
		estado = "encendido";
	}
	reloj.reiniciar(12, 59, 55);
	//Estado inicial del coche
	cout << "El coche esta: " << estado << " Y viaja a una velocidad de: " << mi_coche.obtenerVelocidad() << endl;
	reloj.mostrarHora();
	cout << endl;
	//Se acelera el coche durante 5 segundos a 4m/s^2
	for(int i = 0; i < 5; i++){
		//incremento en la velocidad
		mi_coche.acelerar(4);
		reloj.sumarSegundo(1);
		cout << "El coche esta: " << estado << " Y viaja a una velocidad de: " << mi_coche.obtenerVelocidad() << endl;
		//Se muestra el cambio en el tiempo
		reloj.mostrarHora();
		cout << endl;
	}
	//Se frena el coche a una velocidad de 2 m/s^2
	for(int i = 0; i < 10; i++){
		//decremento en la velocidad
		mi_coche.frenar(2);
		reloj.sumarSegundo(1);
		cout << "El coche esta: " << estado << " Y viaja a una velocidad de: " << mi_coche.obtenerVelocidad() << endl;
		reloj.mostrarHora();
		cout << endl;
	}
	//Termina el trayecto y se apaga el coche ya que ya estamos en velocidad 0
	mi_coche.apagar();
	if(mi_coche.isEncendido() == 0){
		estado = "apagado";
	}
	//Estado final del coche
	cout << "El coche esta: " << estado << " Y viaja a una velocidad de: " << mi_coche.obtenerVelocidad() << endl;
	reloj.sumarSegundo(1);
	reloj.mostrarHora();
}