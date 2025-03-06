#include<iostream>
#include<string>
#include"utils.h"
#include"Hora.h"

using namespace std;

int main(){
    Hora cHora;
    Barquito barco;
    Velocimetro control;
    position a;
    tiempo b;
    a.x = 0;
    a.y = 0;
    a.z = 0;

    b.s = 0;
    b.m = 30;
    b.h = 12;
    cHora.resetHora(12, 30, 0);
    barco.setPosition(a);
    control.setPosition(barco.getPosition());
    for(int i = 0; i = 20; i++){
        for(int j = 0; j < 5; j++){
            position new_Position;
            new_Position.x = i*0.5;
            new_Position.y = 3;
            new_Position.z = j * 4;
            barco.setPosition(new_Position);
        }
        int c = cHora.tiempoTrancurrido(b);
        cout << "El barco esta viajando a una velocidad de: " << control.calcularVelocidad(c) << " en el tiempo: " << cHora.queHoraEs();
    }
}