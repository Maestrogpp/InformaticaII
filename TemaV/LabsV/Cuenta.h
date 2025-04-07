#pragma once
#include<string>
#include<iostream>
using namespace std;

class Cuenta{
	private:
		string numero;
		float saldo;
	public:
		Cuenta();
		Cuenta(string numero, float saldo);
		const bool operator<(const Cuenta& otra);
		Cuenta operator+(const float& monto);
		friend ostream& operator<<(ostream& os, Cuenta cuenta);
		void setNumero(string numero);
		void setsaldo(float saldo);
		string getNumero();
		float getSaldo();
		string toString();

};