#include"hora.h"
#include<iostream>
using namespace std;

void Hora::setHora(int nueva_hora){
    hora = nueva_hora;
}
void Hora::setMinuto(int nuevo_minuto){
    minuto = nuevo_minuto;
}
void Hora::setSegundo(int nuevo_segundo){
    segundo = nuevo_segundo;
}

void Hora::resetHora(int h, int m, int s){
    hora = h;
    minuto = m;
    segundo = s;
}
void Hora::queHoraEs(){
    cout << hora << ":" << minuto << ":" << segundo << endl;
}

void Hora::sumaSegundo(int s){
    segundo += s;
    int cont = 0;
    while(s >= 60){
        s -= 60;
        cont++;
    }
    minuto += cont;
    cont = 0;
    while (minuto >= 60)
    {
        minuto -= 60;
        cont ++;
    }
    hora += cont;
    if(hora >= 24){
        hora = 0;
    }
}

int Hora::tiempoTrancurrido(int h, int m, int s){
    int tts = segundo - s;
    int ttm = (minuto - m) * 60;
    int tth = (hora - h) * 3600;
    return tts + ttm + tth;
}       