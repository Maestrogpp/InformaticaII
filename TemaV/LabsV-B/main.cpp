#include<iostream>
#include<string> 
#include<time.h>
#include"templates.h"
using namespace std;

template<typename T> T mediaAritmeticaElementos(T array[], int n){
    T c;
    for(int i = 0; i < n; i++){
        c = c + array[i];
    }
    return c/n;
};


int main(){
    srand(time(NULL));
    int n = 5;
    int option = 0;
    int a[n];
    Vector2d b[n];
    double c[n-3];

    for(int i = 0; i < n; i++){
        Vector2d q(rand()%12, rand()%12);
        a[i] = rand()%12;
        b[i] = q;
        cout << b[i] << endl;
        if(i > 3){
            c[i-4] = rand()%12;
        }
    }
    while(option != 0){
        cout << "Select the exercise" << endl;
        cin >> option;
        switch(option){
            case 1:{
                cout << mediaAritmeticaElementos(a, n) << endl;
                cout << mediaAritmeticaElementos(b, n-2) << endl;
                cout << mediaAritmeticaElementos(c, n-3) << endl;
                break;
            }
            case 2:{

            }
        }
    }

}