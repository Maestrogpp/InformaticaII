/* 
Nombre: Felipe Maestro Álvarez
Fecha: 03/03/2025
Docente: Manuel E. Gantiva
Descripción: Tema 2
Puntos: 1, 8, 9
*/
using namespace std;

class Rectangulo{
	private:
	//atributos de la calse rectangulo
		float alto;
		double ancho;
	public:
	//setters y getters
		void setAlto(float nuevo_alto);
		void setAncho(double nuevo_ancho);
		float getAlto();
		double getAncho();
		//Métodos de la clase Rectangulo
		void cambiarAltoAncho(float nuevo_alto, double nuevo_ancho);
		double obtenerArea();
};