#include"ListaDeReproduccion.h"

ListaDeReproduccion::ListaDeReproduccion(const Musica& inicial){
    this->musicas[0] = inicial;
    this->cant_musicas = 1;
    this->reproduciendo = nullptr;
}

Musica& ListaDeReproduccion::getReproduciendo(){
    if(this->reproduciendo != nullptr){
        return *(this-> reproduciendo);
    }
}

int ListaDeReproduccion::getCantMusicas(){
    return this->cant_musicas;
}

bool ListaDeReproduccion::setReproduciendo(){
    this->reproduciendo = &musicas[0];
    return true;
}

bool ListaDeReproduccion::setReproduciendo(int numero){
    this->reproduciendo = &musicas[numero];
}

bool ListaDeReproduccion::setReproduciendo(Musica musica){
    for(int i = 0; i < 20; i++){
        if (musicas[i] == musica){
            this->reproduciendo = &musicas[i];
            return true;
        }else{
            this->reproduciendo = nullptr;
            return false;
        }
    }
}

string ListaDeReproduccion::toString(){
    for(int i = 0; i < this->cant_musicas; i++){
        return "Cancion: " + this-> musicas[i].getNombre() + "--Artista: " + this-> musicas[i].getArtista() + "--Duracion: " + to_string(this->musicas[i].getDuracion());
    }
}

ListaDeReproduccion& ListaDeReproduccion::operator+=(const Musica& musica){
    bool temp = false;
    if(this->cant_musicas < 20){
        for(int i = 0; i < cant_musicas; i++){
            if(musicas[i] == musica){
                temp = true;
                break;
            }else{
                temp = false;
            }
        }
        if(temp == false){
            musicas[cant_musicas] = musica;
        }
    }
}
