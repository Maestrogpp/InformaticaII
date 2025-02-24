#include<iostream>
#include<string>
#include"mazo.h"
using namespace std;

int main(){
    char option, option2, option3;
    int cardsplayed = 0;
    bool state;
    bool state2;
    float saldo, apuesta;
    float* pas = &saldo;
    float* pap = &apuesta;
    char* pao = &option;
    char* pao2 = &option2;
    char* pao3 = &option3;
    *pao2 = 'Y';
    cout << "You want to play BlackJack?" << endl;
    cin >> *pao;
    cout << endl;

    while(*pao != 'Y' && *pao != 'N'){
        cout << "That option is not contempled, please try again!" << endl;
        cin >> *pao;
    }

    if(*pao = 'Y'){
        *pas = 2000.5;
        cout << "Do you want to play with a special feature? (If your cards are of the same kind you will recive x4 your bet!)" << endl;
        cin >> *pao2;
        while(*pao2 != 'Y' && *pao2 != 'N'){
            cout << "That option is not contempled, please try again!" << endl;
            cin >> *pao2;
        }
        //Inicio del juego recursivo
        while(state == true){
            if(*pao2 == 'Y'){
                cout << "Please place your bet" << endl;
                cin >> *pap;
                while(*pap < 0 && *pap > *pas){
                    cout << "That bet is not posible! please place another bet" << endl;
                    cin >> *pap;
                }
                mazo bj;
                bj.llenarMazo();
                //bj.mezclarMazo();
                carta mano[10];
                for(int i = 0; i < 4; i ++){
                    if(i == 0 | i == 2){
                        mano[i] = bj.getCarta(rand()%47);
                        cout << "You got a " << mano[i].valor << " of " << mano[i].carta << endl;
                        cardsplayed++;
                    }else{
                        mano[i] = bj.getCarta(rand()%47);
                        cout << "Dealer got a " << mano[i].valor << " of " << mano[i].carta << endl;
                        cardsplayed++;
                    }
                }

                int totalY = mano[0].valor + mano[2].valor;
                int totalD = mano[1].valor + mano[3].valor;

                if (totalY < 21){
                    *pao3 = 'Y';
                    int cont = 4;
                    while(*pao3 == 'Y'){
                        cout << "Do you want another card?" << endl;
                        cin >> *pao3;
                        while(*pao3 != 'Y' && *pao3 != 'N'){
                            cout << "That option is not contempled, please try again!" << endl;
                            cin >> *pao3;
                        }
                        if(*pao3 == 'Y' && totalY < 21){
                            carta aleatoryCard = bj.getCarta(rand()%47);
                            cout << "You get a " << aleatoryCard.valor << " of " << aleatoryCard.carta << endl << endl; 
                            totalY = totalY + aleatoryCard.valor;
                            cout << "now you have " << totalY << " on your hand" << endl;
                            mano[cont] = aleatoryCard;
                            cardsplayed++;
                        }else{
                            *pao3 = 'N';
                        }
                        cont++; cont++;
                    }
                }
                int cont = 3;
                while(totalD < 17){
                    carta aleatoryCard = bj.getCarta(rand()%47);
                    cout << "Dealer got a " << aleatoryCard.valor << " of " << aleatoryCard.carta << endl << endl; 
                    totalD = totalD + aleatoryCard.valor;
                    cout << "Now dealer have " << totalD << " on his hand" << endl;
                    mano[cont] = aleatoryCard;
                    cont++; cont++;
                    cardsplayed++;
                }

                if (totalD < totalY | (totalD > 21 && totalY < 21)){
                    if(*pao == 'Y'){
                        bool winner = true;
                        for (int i = 0; i < cardsplayed; i++){
                            if(winner == true){
                                if (mano[i*2].carta == mano[(i*2)+2].carta | mano[i*2].carta == mano[(i*2)-2].carta){
                                    winner = true;
                                }else{
                                    winner = false;
                                }
                            }else{
                                winner = false;
                            }
                        }
                        if (winner == true){
                            *pas = *pas + (*pap * 4);
                            cout << "Congratulations! You won: " << *pap * 4 << ". Now you have: " << *pas << endl << endl;
                        }else{
                            *pas = *pas + (*pap * 2);
                            cout << "Congratulations! You won: " << *pap * 2 << ". Now you have: " << *pas << endl << endl;
                        }
                    }else{
                        *pas = *pas + (*pap * 2);
                    }
                }else if(totalY < totalD | (totalY > 21 && totalD < 21)){
                    *pas = *pas - *pap;
                    cout << "You lost! Now you have " << *pas << endl << endl; 
                }else{
                    if(totalY == totalD){
                        cout << "We have a tie, no ones win!" << endl;
                    }
                }
                
                cout << "Do you want to play another hand?" << endl;
                cin >> *pao2;
                while(*pao2 != 'Y' && *pao2 != 'N'){
                    cout << "That option is not contempled, please try again!" << endl;
                    cin >> *pao2;
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