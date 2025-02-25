#include<iostream>
#include<string>
#include"mazo.h"
#include"utils1.h"
using namespace std;

int main(){
    char option, option2, option3;
    int cardsplayed = 0;
    bool state;
    bool state2;
    bool state3;
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

    if(*pao != 'Y' && *pao != 'N'){
        while(*pao != 'Y' && *pao != 'N'){
            cout << "That option is not contempled, please try again!" << endl;
            cin >> *pao;
        }
    }

    if(*pao = 'Y'){
        *pas = 2000.5;
        cout << "Do you want to play with a special feature? (If your cards are of the same kind you will recive x4 your bet!)" << endl;
        cin >> *pao2;
        if(*pao2 != 'Y' && *pao2 != 'N'){
            while(*pao2 != 'Y' && *pao2 != 'N'){
                cout << "That option is not contempled, please try again!" << endl;
                cin >> *pao2;
            }
        }
        cout << endl;
        //Inicio del juego recursivo
        while(state == true){
            if(*pao2 == 'Y'){
                cardsplayed = 0;
                while(state3 == true){
                    cout << "Please place your bet" << endl;
                    cin >> *pap;
                    if(*pap > 0 | *pap < *pas){
                        state3 = false;
                    }else{
                        cout << "That option is not contempled!" << endl;
                    }
                }
                cout << endl;
                mazo bj;
                bj.llenarMazo();
                carta mano[30];
                bj.mezclarMazo();
                for(int i = 0; i < 4; i ++){
                    if(i == 0 | i == 2){
                        mano[i] = bj.getCarta(randomnum());
                        cout << "You got a " << mano[i].valor << " of " << mano[i].carta << endl;
                        cardsplayed++;
                    }else{
                        mano[i] = bj.getCarta(randomnum());
                        cout << "Dealer got a " << mano[i].valor << " of " << mano[i].carta << endl;
                        cardsplayed++;
                    }
                }
                cout << endl;
                int totalY = mano[0].valor + mano[2].valor;
                int totalD = mano[1].valor + mano[3].valor;
                *pao3 = 'Y';
                int cont = 0;
                while (totalY < 21 && *pao3 == 'Y'){
                    cout << "Do you want to get another card?" << endl;
                    cin >> *pao3;
                    cout << endl;
                    if(*pao3 == 'Y'){
                        carta aleatoryCard1 = bj.getCarta(randomnum());
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
                    carta aleatoryCard2 = bj.getCarta(randomnum());
                    cout << "Dealer got a " << aleatoryCard2.valor << " of " << aleatoryCard2.carta << endl; 
                    totalD = totalD + aleatoryCard2.valor;
                    cout << "Now dealer have " << totalD << " on his hand" << endl << endl;
                    mano[cont+5] = aleatoryCard2;
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