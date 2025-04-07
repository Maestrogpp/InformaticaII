#pragma once
#include<string>
#include<iostream>
using namespace std;

class Persona{
	protected:
		//Atributos de clase
		string DNI;
		string nombre;
	public:
		//Constructores
		Persona();
			//constructor en base a un nombre y DNI dado
		Persona(string nombre, string DNI);
			//constructor por copia
		Persona(const Persona& otra);
		//operadores
			//Comprueba si los nombres de dos objetos son iguales
		const bool operator==(const Persona& otra);
			//Constituimos lo que debe devolver el marcador de flujo
		friend ostream& operator<<(ostream& os, Persona& persona);
		//setters-getters
		void setDNI(string dni);
		void setNombre(string nombre);
		string getDNI();
		string getNombre();
		//Organizacion de la informacion en un string
		virtual string toString();
};