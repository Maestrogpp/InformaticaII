/* 
Nombre: Felipe Maestro Álvarez
Fecha: 04/04/2025
Docente: Manuel E. Gantiva
Descripción: Tema 6
Puntos: 2
*/
#pragma once
#include<string>
#include<iostream>
using namespace std;

class Cuenta{
	private:
		//atributos de clase
		string numero;
		float saldo;
	public:
		//constructores
		Cuenta();
			//Constructor en base a un numero de cuenta y un saldo inicial
		Cuenta(string numero, float saldo);
		//operadores
			//Comprueba si el saldo de la cuenta es menor al de otra
		const bool operator<(const Cuenta& otra);
			//Suma al saldo una cantidad definida
		Cuenta operator+(const float& monto);
			//Constituimos lo que debe devolver el marcador de flujo
		friend ostream& operator<<(ostream& os, Cuenta cuenta);
		//setters-getters
		void setNumero(string numero);
		void setsaldo(float saldo);
		string getNumero();
		float getSaldo();
		//Organizacion de la informacion en un string
		string toString();
};