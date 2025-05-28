#include<iostream>
#include<string>
#include<time.h>
#include<list>
using namespace std;

list<float> Numeros;
list<float>::iterator it1 = Numeros.begin();
list<float>::iterator it2 = Numeros.end();
int main(){
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        *it1 = rand()%12;
        next(it1, 1);

    }
    for(int i = 0; i < 5; i++){
        cout << *it1 << endl;
        next(it1, 1);
    }
}