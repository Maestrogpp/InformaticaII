#include<string>
#include<stdlib.h>
#include"mazo.h"

using namespace std;

mazo::mazo(){

};

int mazo::llenarMazo(){
    for(int i; i < 48; i++){
        int cont = 0;
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

        aux.valor = i % 12 * 10;
        cartas[i] = aux;
        cont++;
    }
}
carta mazo::getCarta(int numero){
    return this->cartas[numero];
}
carta* mazo::robarCarta(){
    return this->cartas;
}
void mazo::mezclarMazo(){
    for(int i = 0; i < 48; i++){
        int numero1 = rand() ;
        int numero2 = rand() ;
        string a = cartas[numero1].carta;
        int b = cartas[numero1].valor;
        cartas[numero1].carta = cartas[numero2].carta;
        cartas[numero1].valor = cartas[numero2].valor;
        cartas[numero1].carta = a;
        cartas[numero1].valor = b;
    }
}