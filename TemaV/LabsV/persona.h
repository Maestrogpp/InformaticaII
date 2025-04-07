#pragma once
#include<string>
#include<iostream>
using namespace std;

class Persona{
	protected:
		string DNI;
		string nombre;
	public:
		Persona();
		Persona(string nombre, string DNI);
		Persona(const Persona& otra);
		const bool operator==(const Persona& otra);
		friend ostream& operator<<(ostream& os, Persona& persona);
		void setDNI(string dni);
		void setNombre(string nombre);
		string getDNI();
		string getNombre();
		virtual string toString();
};