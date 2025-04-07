#pragma once
#include<string>
#include<iostream>
#include"Cuenta.h"
#include"persona.h"
using namespace std;

class Cliente : public Persona{
	private:
		Cuenta cuenta;
	public:
		Cliente();
		Cliente(string nombre, string DNI, Cuenta cuenta);
		Cliente(Persona persona, Cuenta cuenta);
		friend ostream& operator<<(ostream &os, Cliente& cliente);
		void setCuenta(Cuenta cuenta);
		Cuenta getCuenta();
		string toString();
};