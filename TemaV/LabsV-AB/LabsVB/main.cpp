#include<string>
#include<iostream>
#include"Vector2D.h"
using namespace std;

template<typename T, typename G, typename O> T multiTool(T a[], G result, O alocate, int n, char option){
    switch(option){
        case '0':{
            //media
            for(int i = 0; i < n; i++){
                result += a[i];
            }
            return result/n;
            break;
        };
        case '1':{
            //Varianza
            alocate = multiTool(&a[0], result, alocate, n, '0');
            for(int i = 0; i < n; i++){
                result += (a[i] - alocate)*(a[i] - alocate);
            }
            return result;
            break;
        };
        case '2':{
            T temp = a[0];
            a[0] = a[1];
            a[1] = temp;
            break;
        };
        default:{
            cout << "?" << endl;
            break;
        };
    }
};

template<typename A, typename B> A direcctions(A object1, B object2, A* ptr1, B* ptr2, int option1){
    switch(option1){
        case 3:{
            ptr1 = &object1;
            ptr2 = &object2;

        }
    }
};



int main(){
    //Ejercicio 1
    cout << "Ejercicio 1: " << endl;
    int b[5] = {1, 2, 3, 4, 5};
    float c[3] = {3.45, 4.21, 1.23};
    double d[2] = {4.53221, 5.14342};
    float m = 0,n = 0;
    cout << multiTool(&b[0], 0, 0, 5, '0') << endl;
    cout << multiTool(&c[0], m, n, 3, '0') << endl;
    cout << multiTool(&d[0], 0.0, 0.0, 2, '0') << endl;
    cout << endl << endl;

    //Ejercicio 2
    cout << "Ejercicio 2: " << endl;
    Vector2D f(2, 4);
    Vector2D g(1, 1);
    Vector2D h(2, 3);
    Vector2D y(4,4);
    Vector2D e[4] = {f, g, h, y};
    Vector2D l, tr;
    cout << multiTool(&e[0], l, tr, 4, '0') << endl;
    cout << endl << endl;

    //Ejercicio 3
    cout << "Ejercicio 3: " << endl;
    cout << multiTool(&b[0], 0, 0, 5, '1') << endl;
    cout << multiTool(&c[0], m, n, 3, '1') << endl;
    cout << multiTool(&d[0], 0.0, 0.0, 2, '1') << endl;
    cout << multiTool(&e[0], l, tr, 4, '1') << endl;
    cout << endl << endl;

    //Ejercicio 4
    cout << "Ejercicio 4: " << endl;
    for(int i = 0; i < 4; i++){
        cout << e[i] << ", ";
    }
    cout << endl;
    multiTool(&e[0], l, tr, 4, '2');
    for(int i = 0; i < 4; i++){
        cout << e[i] << ", ";
    }
    cout << endl << endl << endl;

    //ejercicio 5
    cout << "Ejercicio 5" << endl;
    int var1 = 1;
    float var2 = 2;
    int* ptrI;
    float* ptrII;
    direcctions(var1, var2, ptrI, ptrII, '3');
    cout << "ObjectAddr 1: " << ptrI << "\n" << "ObjectAddr 2: " << ptrII << "\n";
    cout << endl << endl;

    //ejercicio 6

    return 0;
}