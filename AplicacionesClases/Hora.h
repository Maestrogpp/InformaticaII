#include"utils.h"
using namespace std;


class Hora{
    private: 
        int hora;
        int minuto;
        int segundo;
    public:
        void setHora(int nueva_hora);
        void setMinuto(int nuevo_minuto);
        void setSegundo(int nuevo_segundo);

        void resetHora(int h, int m, int s);
        void queHoraEs();
        void sumaSegundo(int s);
        int tiempoTrancurrido(int h, int m, int s);
};