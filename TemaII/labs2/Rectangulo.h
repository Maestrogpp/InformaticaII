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
		float alto;
		double ancho;
	public:
		void setAlto(float nuevo_alto);
		void setAncho(double nuevo_ancho);
		float getAlto();
		double getAncho();
		void cambiarAltoAncho(float nuevo_alto, double nuevo_ancho);
		double obtenerArea();
};