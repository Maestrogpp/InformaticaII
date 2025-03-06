/* 
Nombre: Felipe Maestro Álvarez
Fecha: 03/03/2025
Docente: Manuel E. Gantiva
Descripción: Tema 2
Puntos: 1, 8, 9
*/

#include<string>
using namespace std;

class Hora{
	private: 
		int hora;
		int minuto;
		int segundo;
	public:
		void setHora(int h);
		void setMinuto(int m);
		void setSecond(int s);
		int getHora();
		int getMinuto();
		int getSegundo();
		
		void mostrarHora();
		void reiniciar(int h, int m, int s);
		void sumarHora(int h);
		void sumarMinuto(int m);
		void sumarSegundo(int s);
};