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
#include"Cuenta.h"
#include"persona.h"
using namespace std;
//Se declara la clase y la herencia con persona
class Cliente : public Persona{
	private:
		Cuenta cuenta;
	public:
		//constructores
		Cliente();
			//Constructor en base a una cuenta un DNI y un nombre
		Cliente(string nombre, string DNI, Cuenta cuenta);
			//Constructor en base a una persona y cuenta
		Cliente(Persona persona, Cuenta cuenta);
		//operadores
			//Constituimos lo que debe devolver el marcador de flujo
		friend ostream& operator<<(ostream &os, Cliente& cliente);
		//setters-getters
		void setCuenta(Cuenta cuenta);
		Cuenta getCuenta();
		//Organizacion de la informacion en un string
		string toString();
};