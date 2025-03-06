/* 
Nombre: Felipe Maestro Álvarez
Fecha: 03/03/2025
Docente: Manuel E. Gantiva
Descripción: Tema 2
Puntos: 1, 8, 9
*/
#include<iostream>
#include"Hora.h"
using namespace std;

//setters de los atributos de la clase hora
void Hora::setHora(int h){
	if(h < 24 && h >= 0){
		hora = h;
	}
}


void Hora::setMinuto(int m){
	if(m < 60 && m >= 0){
		minuto = m;
	}
}

	
void Hora::setSecond(int s){
	if(s < 60 && s >= 0){
		segundo = s;
	}
}

//getters de la clase hora
int Hora::getHora(){
	return hora;
}


int Hora::getMinuto(){
	return minuto;
}


int Hora::getSegundo(){
	return segundo;
}

//Método para sacar por pantalla la hora
void Hora::mostrarHora(){
	cout << "Son las: " << hora << ":" << minuto << ":" << segundo; 
}

//Reinicio en un punto x del reloj
void Hora::reiniciar(int h, int m, int s){
	if(h < 24 && h >= 0 && m < 60 && m >= 0 && s < 60 && s >= 0){
		hora = h;
		minuto = m;
		segundo = s;
	}
	
}

//Se añade a la hora un incremento x
void Hora::sumarHora(int h){
	hora = hora + h;
	if(hora > 24){
		while(hora > 24){
			hora = hora - 24;
		}
	}
}

//Se añade al minuto un incremento x
void Hora::sumarMinuto(int m){
	minuto = minuto + m;
	int cont = 0;
	//Si los minutos se igualan o superan 60 se convierte en una hora
	if(minuto >= 60){
		while(minuto >= 60){
			minuto = minuto - 60;
			cont++;
		}
	}
	hora = hora + cont;
}

//Se añade al segundo un incremento x
void Hora::sumarSegundo(int s){
	segundo = segundo + s;
	int cont = 0;
	//Si los segundos igualan o superan 60 se convierte en minutos
	if (segundo >= 60){
		while(segundo >= 60){
			segundo = segundo - 60;
			cont++;
		}
	}
	minuto = minuto + cont;
	cont = 0;
	if(minuto >= 60){
		while(minuto >= 60){
			minuto = minuto - 60;
			cont++;
		}
	}
	hora = hora + cont;
	if (hora >= 24){
		hora = 0;
	}
}

