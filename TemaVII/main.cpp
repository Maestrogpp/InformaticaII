#include"Asignatura.h"
#include<stack>
#include<array>
#include<list>
#include<queue>
#include<typeinfo>
#include<vector>
int main(){
    array<Asignatura, 5> SoftwareI;
    
    Asignatura a("Economia", 1, 0.5);
    Asignatura b("Sistemas Electronicos Digitales", 1, 0.7);
    Asignatura c("Informatica I", 1, 0.7);
    Asignatura d("Matematicas I", 1, 0.9);
    Asignatura e("Algoritmos", 1, 0.5);

    SoftwareI[0] = a;
    SoftwareI[1] = b;
    SoftwareI[2] = c;
    SoftwareI[3] = d;
    SoftwareI[4] = e;

    for(int i = 0; i < 5; i++){
        cout << SoftwareI[i] << endl;
    }
    
    //Ejercicio 2
    Asignatura f("MatematicasII", 2, 0.9);
    Asignatura g("InformaticaII", 2, 0.7);
    Asignatura h("Electronica y electromagnetismo", 2, 1);
    Asignatura i("Estadistica", 2, 0.5);
    Asignatura j("Introduccion a los sistemas informaticos", 2, 0.4);
    Asignatura k("Bases de datos", 3, 0.8);
    Asignatura l("InformaticaIII", 3, 0.8);
    Asignatura m("Etica y Moral", 3, 0.5);
    Asignatura n("Computer arquitecture", 3, 0.8);
    Asignatura o("Ingenieria de requisitos", 3, 0.6);

    array<Asignatura, 5> SoftwareII;
    array<Asignatura, 5> SoftwareIII;
    SoftwareII[0] = f;
    SoftwareII[1] = g;
    SoftwareII[2] = h;
    SoftwareII[3] = i;
    SoftwareII[4] = j;
    SoftwareIII[0] = k;
    SoftwareIII[1] = l;
    SoftwareIII[2] = m;
    SoftwareIII[3] = n;
    SoftwareIII[4] = o;

    list<Asignatura> Uni;
    int option;
    cout << "Por donde quiere empezar a ver las asignaturas por el cuatrimestre 1 o 3" << endl;
while(option != 0){
    cin >> option;
    switch(option){
        case 1:{
            for(int i = 0; i < 5; i++){
                Uni.push_back(SoftwareI[i]);
            }        
            for(int i = 0; i < 5; i++){
                Uni.push_back(SoftwareII[i]);
            }
            for(int i = 0; i < 5; i++){
                Uni.push_back(SoftwareIII[i]);
            }
            list<Asignatura>::iterator it1 = Uni.begin();
            for(int i = 0; i < 15; i++){
                cout << *it1 << endl;
                advance(it1, 1);
            }
            break;
        }
        case 3:{
            for(int i = 0; i < 5; i++){
                Uni.push_back(SoftwareI[i]);
            }        
            for(int i = 0; i < 5; i++){
                Uni.push_back(SoftwareII[i]);
            }
            for(int i = 0; i < 5; i++){
                Uni.push_back(SoftwareIII[i]);
            }
            list<Asignatura>::iterator it2 = Uni.end();
            for(int i = 0; i < 15; i++){
                --it2;
                cout << *it2 << endl;
            }
            break;
        }
        case 0:{
            cout << "exiting" << endl;
        }
        default:{
            cout << "opcion no contemplada" << endl;
            break;
        }
    }
}
    //Ejercicio 3
    stack<Asignatura> pila;
    pila.push(a);
    pila.push(b);
    pila.push(c);
    pila.push(d);
    pila.push(e);
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;
    pila.pop();
    cout << pila.top() << endl;

    cout << endl;

    //Ejercicio 4
    queue<Asignatura> Aleat;
    Aleat.push(a);
    Aleat.push(b);
    Aleat.push(c);
    Aleat.push(d);
    Aleat.push(e);
    cout << Aleat.front() << endl;
    Aleat.pop();
    cout << Aleat.front() << endl;
    Aleat.pop();
    cout << Aleat.front() << endl;
    Aleat.pop();
    cout << Aleat.front() << endl;
    Aleat.pop();
    cout << Aleat.front() << endl;

    //Ejercicio 5
    //a
    array<Asignatura, 5> Desordenado;
    Desordenado[0] = b;
    Desordenado[1] = g;
    Desordenado[2] = h;
    Desordenado[3] = a;
    Desordenado[4] = n;

    cout << endl << endl;
    cout << "array desordenada" << endl;
    for(int i = 0; i < Desordenado.size(); i++){
        cout << Desordenado[i] << endl;
    }

    for(int i = 0; i < Desordenado.size(); i++){
        int indice_menor = i;
        for(int j = i+1; j < Desordenado.size(); j++){
            if(Desordenado[j] < Desordenado[i]){
                indice_menor = j;
            }
        }
        if (i != indice_menor){
            Asignatura x = Desordenado[i];
            Desordenado[i] = Desordenado[indice_menor];
            Desordenado[indice_menor] = x;
        }else{
            break;
        }
    }
    cout << endl;
    cout << "array ordenada" << endl;
    for(int i = 0; i < Desordenado.size(); i++){
        cout << Desordenado[i] << endl;
    }

    cout << endl << endl;
    //b
    vector<Asignatura> DesordenadoII = {a, b, m, n, f, g};   
    vector<Asignatura>::iterator insert, location;

    location = DesordenadoII.begin();
    cout << "Vector desordenado" << endl;
    for(int i = 0; i < DesordenadoII.size(); i++){
        cout << *location << endl;
        advance(location, 1);
    }

    for(int i = 1; i < DesordenadoII.size(); i++){
        location = DesordenadoII.begin();
        insert = DesordenadoII.begin() + i;
        for(int j = 0; j <= 1; j++){
            if(*location > *insert){
                break;
            }
            advance(location, 1);
        }
        Asignatura value = *insert;
        DesordenadoII.erase(insert);
        DesordenadoII.insert(location, value);
    }
    cout << endl;
    location = DesordenadoII.begin();
    cout << "Vector desordenado" << endl;
    for(int i = 0; i < DesordenadoII.size(); i++){
        cout << *location << endl;
        advance(location, 1);
    }
    return 0;
}