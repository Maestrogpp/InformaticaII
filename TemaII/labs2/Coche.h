/* 
Nombre: Felipe Maestro Álvarez
Fecha: 03/03/2025
Docente: Manuel E. Gantiva
Descripción: Tema 2
Puntos: 1, 8, 9
*/
#include<string>
using namespace std;

class Coche{
	private:
	//Atributos del coche
		string color;
		string motor;
		double velocidadMaxima;
		double velocidad;
		bool encendido;
	public:
	//setters de las caracteristicas del coche
		void setColor(string& nuevoColor);
		void setMotor(string& nuevoMotor);
		void setVelocidadMaxima(double nuevaVelocidadMaxima);
		
	//metodos necesarios para el funcionamiento de cualquier coche (abstraccion)
		void arrancar();
		void apagar();
		void frenar(double decremento);
		void acelerar(double incremento);
		bool isEncendido();
		double obtenerVelocidad();
};