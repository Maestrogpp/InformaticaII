#include"utils1.h"
#include<string>
#include<stdio.h>
#include<time.h>
#include<iostream>
#include<limits>
using namespace std;

bool leerApuesta(float& valor) { 
    bool esFloat;

    cin >> valor;            
    esFloat = cin.good();   

    if(!esFloat){           
       cin.clear();          
    
       cin.ignore(numeric_limits <streamsize>::max(), '\n');
    }                        
    return esFloat;         
}

bool leerOpcion(char& opcion) {
    bool esChar;

    cin >> opcion;
    esChar = cin.good();

    if(!esChar){
        cin.clear();

        cin.ignore(numeric_limits <streamsize>::max(), '\n');
    }
    return esChar;
}