#include<string>

using namespace std;

typedef struct{
    string carta;
    int valor;
} carta;

class mazo{
    private: 
        carta cartas[48];
        carta* carta_superior;
    public:
        int numero_de_cartas = 48;
        mazo();
        int llenarMazo();
        carta getCarta(int numero);
        carta* robarCarta();
        void mezclarMazo();
};