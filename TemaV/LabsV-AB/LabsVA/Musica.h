#pragma once
#include<iostream>
#include<string>

using namespace std;

class Musica{
    private:
        string nombre;
        string artista;
        int duracion;
    public:
        Musica();
        Musica(string nombre, string artista, int duracion);
        //getters
        string getNombre();
        string getArtista();
        int getDuracion();
        //setters
        void setNombre(string nombre);
        void setArtista(string artista);
        void setDuracion(int duracion);
        //methods
        string toString();
        bool operator==(const Musica& otra);
        bool operator<(const int& duracion);
};