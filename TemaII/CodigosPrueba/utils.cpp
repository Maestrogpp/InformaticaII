#include"utils1.h"
#include<string>
#include<stdio.h>
#include<iostream>
using namespace std;

bool electionErrorControler(char op){
    if(op != 'Y' && op != 'N'){
        cout << "Opcion no contemplada! Vuelve a introducir Y/N" << endl;
        return true;
    }else{
        return false;
    }
}

bool betErrorControler(int num, int saldo){
    if (num > saldo | num <= 0 ){
        cout << "Esa apuesta no es realista! Vuelve a introducir tu apuesta y recuerda que tu saldo es: " << saldo << endl;
        return true;
    }else{
        return false;
    }
}