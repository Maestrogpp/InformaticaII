#include<iostream>
#include<time.h>
#include<string>
#include"Hora.h"

using namespace std;

int main(){
    Hora cHora;
    Barquito barco;
    Velocimetro control;
    srand(time(NULL));
    //modulo
    cHora.resetHora(12, 30, 0);
    barco.setPosition(3.5, 0, 20);
    control.setPosition(barco.getPosition());
    for(int i = 0; i < 20; i++){
        position last_position;
        last_position = barco.getPosition();
        position new_Position;
        new_Position.x = last_position.x + i*rand()%4 - i*rand()%2;
        new_Position.y = last_position.y + rand();
        new_Position.z = last_position.z + i * rand()%4 - i*rand()%6;
        barco.setPosition(new_Position.x, new_Position.y, new_Position.z);
        cHora.sumaSegundo(1);
        control.setPosition(new_Position);
        control.setLastPosition(last_position); 
        int c = cHora.tiempoTrancurrido(12, 30, 0);
        cout << "El barco esta viajando a una velocidad de: " << control.calcularVelocidad(c) << "m/s" << endl;
        cout << "En el tiempo: ";
        cHora.queHoraEs();
    }
}