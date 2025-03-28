#include<iostream>
#include<time.h>
#include<string>
#include"mazo.h"
#include"utils1.h"
using namespace std;

int main(){
    //---------------------------------------------------------------------------------------------------------------
    //variables
    char option, option2, option3;
    float saldo, apuesta;
    int cardsplayed = 0;
    bool state;
    bool winner = false; 
    //Agilizacion de memoria - punteros
    float* pas = &saldo;
    float* pap = &apuesta;
    char* pao = &option;
    char* pao2 = &option2;
    char* pao3 = &option3;
    //---------------------------------------------------------------------------------------------------------------
    //Inicio del programa - quiere el usuario jugar?
    cout << "You want to play BlackJack?" << endl;
    cin >> *pao;
    cout << endl;
    while(*pao != 'Y' && *pao != 'N'){
        cout << "That option is not contempled, please try again!" << endl;
        cin >> *pao;
    }
    //---------------------------------------------------------------------------------------------------------------
    //Ajustes de juego
    if(*pao = 'Y'){
        *pas = 2000.5;
        cout << "Do you want to play with a special feature? (If your cards are of the same kind you will recive x4 your bet!)" << endl;
        cin >> *pao2;
    while(*pao2 != 'Y' && *pao != 'N'){
        cout << "That option is not contempled, please try again!" << endl;
        cin >> *pao2;   
    }
        cout << endl;
    //---------------------------------------------------------------------------------------------------------------
    //programa principal
        while(state == true){
                //inicialiacion de una semilla aleatoria para que no se repitan las mismas manos nunca
                srand(time(NULL));
                //se reinicializa la variable cardsplayed para evitar problemas en memoria y reinscribir los datos
                cardsplayed = 0;
                //se pide la apuesta para la ronda
                cout << "Please place your bet" << endl;
                //control de errores de la apuesta
                while(!leerApuesta(*pap) || *pap < 0 || *pap > *pas){
                    cout << "That option is not contempled, please try again!" << endl;
                }
                cout << endl;
    //---------------------------------------------------------------------------------------------------------------
                //inicializacion de los objetos y variables necesarios e inicio de reparto de las cartas 
                mazo bj;
                bj.llenarMazo();
                carta mano[30];
                bj.mezclarMazo();
                for(int i = 0; i < 4; i ++){
                    if(i%2 == 0){
                        mano[i] = bj.getCarta(rand()%48);
                        cout << "You got a " << mano[i].valor << " of " << mano[i].carta << endl;
                        cardsplayed++;
                    }else{
                        mano[i] = bj.getCarta(rand()%48);
                        cout << "Dealer got a " << mano[i].valor << " of " << mano[i].carta << endl;
                        cardsplayed++;
                    }
                }
                cout << endl;
                int totalY = mano[0].valor + mano[2].valor;
                int totalD = mano[1].valor + mano[3].valor;
    //---------------------------------------------------------------------------------------------------------------
                //reparto de cartas adicionales para el dealer y el jugador
                *pao3 = 'Y';
                int cont = 0;
                while (totalY < 21 && *pao3 == 'Y'){
                    cout << "Do you want to get another card?" << endl;
                    cin >> *pao3;
                    cout << endl;
                    if(*pao3 == 'Y'){
                        carta aleatoryCard1 = bj.getCarta(rand()%48);
                        cout << "You got a " << aleatoryCard1.valor << " of " << aleatoryCard1.carta << endl; 
                        totalY = totalY + aleatoryCard1.valor;
                        cout << "Now you have " << totalY << " on your hand" << endl << endl;
                        mano[cont+4] = aleatoryCard1;
                        cont++; cont++;
                        cardsplayed++;
                    }
                    
                }
                cont = 0;
                while(totalD < 17){
                    carta aleatoryCard2 = bj.getCarta(rand()%48);
                    cout << "Dealer got a " << aleatoryCard2.valor << " of " << aleatoryCard2.carta << endl; 
                    totalD = totalD + aleatoryCard2.valor;
                    cout << "Now dealer have " << totalD << " on his hand" << endl << endl;
                    mano[cont+5] = aleatoryCard2;
                    cont++; cont++;
                    cardsplayed++;
                }
    //---------------------------------------------------------------------------------------------------------------
                if(*pao2 == 'Y'){
                    for(int i = 0; i < cardsplayed; i++){
                        if(i > 0 && i < cardsplayed){
                            if(mano[i].carta == mano[i+1].carta && mano[i].carta == mano[i-1].carta){
                            winner = true;
                            }
                        }
                    }
                }
                if (totalD <= 21 && totalY <= 21){
                    if(totalD < totalY && totalY <= 21){
                        cout << "You won! " << endl;
                        if(winner == true){
                            *pas += (*pap * 4);
                        }else{
                            *pas += (*pap *2);
                        }
                    }
                    if(totalD > totalY && totalD <= 21){
                        cout << "You loose!" << endl;
                        *pas -= *pap;
                    }
                    if(totalD == totalY){
                        cout << "We have a tie!" << endl;
                    }
                }else{
                    if(totalD == totalY){
                        cout << "We have a tie!" << endl;
                    }
                    if(totalD > 21 && totalY > 21){
                        cout << "We have a tie!" << endl;
                    }
                    if(totalY > 21 && totalD < 21){
                        cout << "You loose!" << endl;
                        *pas -= *pap;
                    }
                    if(totalD > 21 && totalY < 21){
                        cout << "you won!" << endl;
                        if(winner == true){
                            *pas += (*pap * 4);
                        }else{
                            *pas += (*pap *2);
                        }
                    }
                }
    //---------------------------------------------------------------------------------------------------------------
                cout << "saldo: " << *pas << endl << endl;
                //Quiere jugar otra mano?
            if(*pas > 0){
                cout << "Do you want to play another hand?" << endl;
                cin >> *pao2;
                if(*pao2 != 'Y' && *pao2 != 'N'){
                    while(*pao2 != 'Y' && *pao2 != 'N'){
                        cout << "That option is not contempled, please try again!" << endl;
                        cin >> *pao2;
                    }
                }
                if(*pao2 == 'N'){
                    cout << "It was a pleasure to play with you!" << endl;
                    cout << "exiting" << endl;
                    state = false;
                }
            }else{
                cout << "It was a pleasure to play with you!" << endl;
                cout << "exiting" << endl;
                state = false;
            }
        }  
    }else{
        cout << "It was a pleasure to play with you!" << endl;
        cout << "exiting" << endl;
    }
}