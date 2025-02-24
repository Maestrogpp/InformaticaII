#include<string>
#include<stdlib.h>
#include"mazo.h"

using namespace std;
mazo::mazo(){};
int mazo::llenarMazo(){
    int cont = 0;
    for(int i; i < 48; i++){
        carta aux;
        if (cont < 12){
            aux.carta = "Bastos";
        }else if(cont > 12){
            aux.carta = "Oros";
        }else if(cont > 24){
            aux.carta = "Copas";
        }else if(cont > 36){
            aux.carta = "Espadas";
        }
        aux.valor = i % 12;
        cartas[i] = aux;
        cont++;
    }
}
carta mazo::getCarta(int numero){
    return this->cartas[numero];
}
carta* mazo::robarCarta(){
    carta* card = &cartas[0];
    return card; 
}
void mazo::mezclarMazo(){
    for(int i = 0; i < 48; i++){
        carta* cardSelected1 = &cartas[rand()%48];
        carta* cardSelected2 = &cartas[rand()%48];
        carta* cardKeep = &cartas[49];

        *cardKeep = *cardSelected1;
        *cardSelected2 = *cardSelected1;
        *cardSelected1 = *cardKeep;
    }
}

