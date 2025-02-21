#include<iostream>
#include<string>
#include"coche.h"

using namespace std;

int main(){
    coche nuevo;
    string a = nuevo.getNombre();
    double b = nuevo.getVelocidad();
    cout << a << " " << b << endl;

    return 0;
}