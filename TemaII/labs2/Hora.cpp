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


int Hora::getHora(){
	return hora;
}


int Hora::getMinuto(){
	return minuto;
}


int Hora::getSegundo(){
	return segundo;
}

		
void Hora::mostrarHora(){
	cout << "Son las: " << hora << ":" << minuto << ":" << segundo; 
}


void Hora::reiniciar(int h, int m, int s){
	if(h < 24 && h >= 0 && m < 60 && m >= 0 && s < 60 && s >= 0){
		hora = h;
		minuto = m;
		segundo = s;
	}
	
}


void Hora::sumarHora(int h){
	hora = hora + h;
	if(hora > 24){
		while(hora > 24){
			hora = hora - 24;
		}
	}
}


void Hora::sumarMinuto(int m){
	minuto = minuto + m;
	int cont = 0;
	if(minuto >= 60){
		while(minuto >= 60){
			minuto = minuto - 60;
			cont++;
		}
	}
	hora = hora + cont;
}


void Hora::sumarSegundo(int s){
	segundo = segundo + s;
	int cont = 0;
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

