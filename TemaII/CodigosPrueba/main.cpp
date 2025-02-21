#include<iostream>
#include<string>
#include"coche.h"
#include"mesaCuadrada.h"
#include"mazo.h"
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
    bool state4 = false;
    char option;
    cout << "desea jugar un juego de cartas? Y/N" << endl;
    cin >> option;
    if (option != 'Y' && option != 'N'){
        state4 = true;
        while(state4 == true){
            cout << "Opcion no contemplada! vuelve a introducir Y/N y recuerda que es en mayuscula" << endl;
            cin >> option;
            if (option == 'Y' | option == 'N'){
                state4 = false;
            }
        }
    }
    cout << endl << endl << endl;
    if (option == 'Y'){
        float apuesta = 0;
        float saldo = 2000.50;
        char specialFeature;
        bool state = true;
        bool state2 = false;
        bool state3 = false;
        bool state5 = false;
        int cont = 1;
        mazo NuevoMazo;
        carta mano[10];
        cout << "Jugando al blackjack/Baraja española" << endl;
        cout << "Su saldo inicial es de: " << saldo << endl;
        cout << "Desea Jugar con la funcion especial? (Si ganas con cartas del mismo palo el bote es x4 en vez de x2) Y/N" << endl;
        cin >> specialFeature;
        if(specialFeature != 'Y' && specialFeature  != 'N'){
            state3 == true;
            while(state3 == true){
                cout << "Opcion no contemplada! vuelve a introducir Y/N y recuerda que es en mayuscula" << endl;
                cin >> option;
                if (specialFeature == 'Y' | specialFeature == 'N'){
                    state3 = false;
                }
            }
        }
        while(state == true){
            NuevoMazo.llenarMazo();
            NuevoMazo.mezclarMazo();
            if(cont > 1){
                cout << "Desea seguir jugando?" << endl;
                cin >> option;
            }
            if(option == 'Y'){
                cout << "Cuanto desea apostar?" << endl;
                cin >> apuesta;
                if (apuesta > saldo | apuesta <= 0 ){
                    state2 = true;
                    while (state2 == true){
                        cout << "No estas introduciendo una apuesta realista!" << endl;
                        cout << "Introduce de nuevo tu apuesta, recuerda que tu saldo es: " << saldo << endl;
                        cin >> apuesta;
                        if (apuesta < saldo && apuesta > 0){
                            state2 = false;
                        }
                    }
                }
                int cont3 = 0;
                int cont2 = 2;
                int totalY = 0;
                int totalD = 0;
                cout << "Ronda " << cont << endl;
                for(int i = 0; i < 4; i++){
                    int number = rand() % 48;
                    mano[i] = NuevoMazo.getCarta(number);
                    if (i == 1|i== 3){
                        cout << "You: " << mano[i].valor << " " << mano[i].carta << endl << endl;
                    }else{
                        cout << "Dealer: " << mano[i].valor << " " << mano[i].carta << endl << endl;
                    }
                }
                int a = mano[2].valor + mano[4].valor;
                int b = mano[1].valor + mano[3].valor;
                cout << "Total dealer: " << a << "Total you: " << b << endl << endl;
                while(a < 21 && b < 21){
                    cout << "Deseas otra carta? (Y/N)" << endl;
                    cin >> option;
                    if(option != 'Y' && option != 'N'){
                        state5 = true;
                        while (state5 == true){
                            cout << "Opcion no contemplada! vuelve a introducir Y/N y recuerda que es en mayuscula" << endl;
                            cin >> option;
                            if (option == 'Y' | option == 'N'){
                                state5 = false;
                            }
                        }  
                    }
                    if (option == 'Y'){
                        while(a < 21){
                            mano[4 + cont2].valor = NuevoMazo.getCarta(rand()%48).valor;
                            cont2 = cont2 + 2;
                            cont3++;
                        }
                    }else while(b < 17){
                        mano[3 + cont2].valor = NuevoMazo.getCarta(rand()%48).valor;
                        cont2 = cont2 + 2;
                        cont3++;
                    }
                    cont2 = 4;
                    if (b < 17){
                        while(b < 17){
                            mano[3 + cont2].valor = NuevoMazo.getCarta(rand()%48).valor;
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
                    if (totalY>totalD && specialFeature == false){
                        cout << "Ganaste!" << endl;
                        saldo = saldo * 2;
                        cout << "Tu saldo ahora es: " << saldo << endl;
                    }else if(totalY>totalD && specialFeature == true){
                        cout << "Ganaste!" << endl;
                        saldo = saldo * 2;
                        bool winner;
                        for(int i = 0; i < 4+cont3; i++){
                            if(i%2 == 0){
                                string var = mano[i-2].carta;
                                if (i > 2){
                                    if (winner == true){
                                        if (var == mano[i].carta){
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