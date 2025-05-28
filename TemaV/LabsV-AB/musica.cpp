#include"Musica.h"

Musica::Musica(){
    this->nombre = "Default";
    this->artista = "Default";
    this->duracion = 0;
}

Musica::Musica(string nombre, string artista, int duracion){
    this->nombre = nombre;
    this->artista = artista;
    this->duracion = duracion;
}

//getters
string Musica::getNombre(){
    return this-> nombre;
}

string Musica::getArtista(){
    return this-> artista;
}

int Musica::getDuracion(){
    return this-> duracion;
}

//setters
void Musica::setNombre(string nombre){
    this-> nombre = nombre;
}

void Musica::setArtista(string artista){
    this-> artista = artista;
}

void Musica::setDuracion(int duracion){
    this-> duracion = duracion;
}

//methods
string Musica::toString(){
    return "Artista: " + this-> artista + "--Duracion: " + to_string(this->duracion);
}

bool Musica::operator==(const Musica& otra){
    if(this-> duracion == otra.duracion && this-> nombre == otra.nombre){
        return true;
    }else{
        return false;
    }
}

bool Musica::operator<(const int& duracion){
    if(this->duracion < duracion){
        return true;
    }else{
        return false;
    }
}
