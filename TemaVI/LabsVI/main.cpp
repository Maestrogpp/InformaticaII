#include<iostream>
#include<string> 
#include<time.h>
#include"templates.h"
using namespace std;


template<typename T> T mediaAritmeticaElementos(T array[], int n){
    T c = 0;
    for(int i = 0; i < n; i++){
        c += array[i];
    }
    return c/n;
};


int main(){
    srand(time(NULL));
    int n = 5;
    int option = 0;
    int a[n];
    float b[n-2];
    double c[n-3];

    for(int i = 0; i < n; i++){
        a[i] = rand()%12;
        if(i >= 2){
            b[i-2] = rand()%12;
        }
        if(i > 3){
            c[i-4] = rand()%12;
        }
    }
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