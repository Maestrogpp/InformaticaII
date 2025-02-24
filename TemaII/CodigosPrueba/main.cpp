#include<iostream>
#include<string>
#include"coche.h"
#include"mesaCuadrada.h"
#include"mazo.h"
#include"utils1.h"
using namespace std;

int main(){
    //coche
    coche nuevo;
    string a = nuevo.getNombre();
    double b = nuevo.getVelocidad();
    //prueba del construtor
    cout << a << " " << b << endl;
    //declaracion de los parametros de mi objeto
    nuevo.setNombre("Mazda mx5 1998");
    nuevo.setVelocidad(70);
    //salida de datos
    cout << "Tengo un " << nuevo.getNombre() << " y estoy conduciendo a una velocidad de: " << nuevo.getVelocidad() << endl << endl; 
    //Declaración de un objeto de tipo mesa
    mesaCuadrada nuevaMesa;
    nuevaMesa.setPatas(4); //no es necesario ya que el default del constructor es 4
    nuevaMesa.setLado(7.0);
    nuevaMesa.setcolor("blanco");
    //salida de datos
    cout << "Mi mesa tiene " << nuevaMesa.getPatas() << " patas, posee " << nuevaMesa.getLado() << " cm de lado y es de color " << nuevaMesa.getColor() << endl;
    cout << "Tambien se que mi mesa tiene un area de: " << nuevaMesa.obtenerArea() << endl << endl;
    //juego de cartas
    //
    //
    bool state3 = true;
    char option;
    cout << "desea jugar un juego de cartas? Y/N" << endl;
    while(state3 == true){
        cin >> option;
        state3 = electionErrorControler(option);
    }
    state3 = true;
    cout << endl << endl << endl;
    if (option == 'Y'){
        //Variables numericas
        float apuesta = 0;
        float saldo = 2000.50;
        int cont = 1;
        //variables de eleccion
        char specialFeature;
        char option2;
        //variables de estado
        bool state = true;
        bool state2 = true;
        bool state6 = true;
        bool state7 = false;
        //variables de objeto-estructura
        mazo NuevoMazo;
        carta mano[10];
        //Inicio de programa
        cout << "Jugando al blackjack/Baraja española" << endl;
        cout << "Su saldo inicial es de: " << saldo << endl;
        //inicialización de la funcion Especial de Juego
        cout << "Desea Jugar con la funcion especial? (Si ganas con cartas del mismo palo el bote es x4 en vez de x2) Y/N" << endl;
        while (state3 == true){
            cin >> specialFeature;
            state3 = electionErrorControler(specialFeature);
        }
        state3 = true;
        while(state == true){
            //Declaración de variables para el juego
            NuevoMazo.llenarMazo();
            NuevoMazo.mezclarMazo();
            int cont3 = 0;
            int cont2 = 2;
            int totalY = 0;
            int totalD = 0;
            //Inicio del programa
            //Eleccion del jugador para saber si quiere seguir jugando, se activa a partir de la 2 ronda
            if(cont > 1){
                cout << "Desea seguir jugando?" << endl;
                while(state3 == true){
                    cin >> option;
                    state3 = electionErrorControler(option);
                }
                state3 = true;
            }
            //Inicio del juego
            if(option == 'Y'){
                //Se introduce la apuesta
                cout << "Cuanto desea apostar?" << endl;
                while(state2 == true){
                    cin >> apuesta;
                    state2 = betErrorControler(apuesta, saldo);
                }
                //inicia la ronda
                cout << "Ronda " << cont << endl;
                for(int i = 0; i < 4; i++){
                    //Se escogen 4 cartas aleatorias por su posicion en el mazo
                    mano[i] = NuevoMazo.getCarta(rand()%48);
                    if (i == 0|i== 2){
                        cout << "You: " << mano[i].valor << " " << mano[i].carta << endl << endl;
                    }else{
                        cout << "Dealer: " << mano[i].valor << " " << mano[i].carta << endl << endl;
                    }
                }
                //Se hace el calculo de los valores numericos para determinar si se cumplen las condiciones para seguir el juego
                int rycom = mano[1].valor + mano[3].valor;
                int rdcom = mano[0].valor + mano[2].valor;
                cout << "Total dealer: " << rycom << " Total you: " << rdcom << endl << endl;
                while(rycom < 21 && rdcom < 21){
                    cout << "Deseas otra carta? (Y/N)" << endl;
                        while (state3 == true){
                            cin >> option;
                            state3 = electionErrorControler(option);
                        }
                        state3 = true;  
                    if (option == 'Y'){
                        while(state6 == true){
                            if (rycom < 21){
                                mano[3 + cont2].valor = NuevoMazo.getCarta(rand()%48).valor;
                                rycom = rycom + mano[3+cont2].valor;
                                cont2 = cont2 + 2;
                                cont3++;
                                cout << "Deseas otra carta? (Y/N)" << endl;
                                if(option2 != 'Y' && option2 != 'N'){
                                    state7 = true;
                                    while (state7 == true){
                                        cout << "Opcion no contemplada! vuelve a introducir Y/N y recuerda que es en mayuscula" << endl;
                                        cin >> option2;
                                        if (option2 == 'Y' | option2 == 'N'){
                                            state7 = false;
                                        }
                                    }  
                                }else if(option2 == 'N'){
                                    state6 = false;
                                }
                            }else {
                                state6 = false;
                            }
                        }
                    }else{
                        while(rdcom < 17){
                            mano[4 + cont2].valor = NuevoMazo.getCarta(rand()%48).valor;
                            rdcom = rdcom + mano[4 + cont2].valor;
                            cout << "Dealer got: " << mano[4 + cont2].valor << " " << mano[4 + cont2].carta << endl;
                            cout << "New total dealer: " << rdcom;
                            cont2 = cont2 + 2;
                            cont3++;
                        }
                    }
                    cont2 = 4;
                    if (rdcom < 17){
                        while(rdcom < 17){
                            mano[4 + cont2].valor = NuevoMazo.getCarta(rand()%48).valor;
                            rdcom = rdcom + mano[4 + cont2].valor;
                            cout << "Dealer got: " << mano[4 + cont2].valor << " " << mano[4 + cont2].carta << endl;
                            cout << "New total dealer: " << rdcom;
                            cont2 = cont2 + 2;   
                            cont3++;
                        }
                    }
                    for(int i = 0; i < cont3+4; i++){
                        if(i%2 == 0 | i == 0){
                            totalY = totalY + mano[i].valor;
                        }else{
                            totalD = totalD + mano[i].valor;
                        }
                    }
                    if (totalY>totalD && specialFeature == 'Y'){
                        cout << "Ganaste!" << endl;
                        saldo = saldo * 2;
                        cout << "Tu saldo ahora es: " << saldo << endl;
                    }else if(totalY>totalD && specialFeature == 'Y'){
                        cout << "Ganaste!" << endl;
                        saldo = saldo * 2;
                        bool winner;
                        for(int i = 0; i < 4+cont3; i++){
                            if(i%2 == 0 | i == 0){
                                string var = mano[i-2].carta;
                                if (i > 1){
                                    if (winner == true){
                                        if (var == mano[i].carta){
                                            winner = true;
                                        }else{
                                            winner = false;
                                        }
                                    }
                                }else{
                                    winner = true;
                                }
                            }
                        }
                        if(winner == true){
                            saldo = saldo * 2;
                        }
                        cout << "Tu saldo ahora es: " << endl;
                    }else if(totalY<totalD){
                        cout << "Perdiste :(" << endl;
                        cout << "Tu saldo ahora es: " << endl;
                    }
                }
                cont++;
            }else{
                cout << "nice to play with you" << endl;
            }
        }
    }else{
        cout << "ok!" << endl;
    }
    return 0;
}