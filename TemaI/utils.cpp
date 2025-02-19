//Declaracion de utilidad
using namespace std;
#include<iostream>

//Declaracion de funcionalidades
void ejercicio1(float& ref_f1){
    //Realizacion de la regla aritmetica para pasar grados a radianes
    float result = ref_f1 * 3.14 / 180;
}

void ejercicio3(int* pe, double* pd, long l1){
    //Realizacion de la ecuacion dispuesta en el ejercicio 3
    *pd = *pe * l1 / *pd;
}

int multiplicarVectores(int* pav1, int* pav2, int n){
    //Declaracion de una variable para almacenar el resultado de manera momentania
    int result = 0;
    //Realizacion de la exuacion dispuesta en el ejercicio 5
    for (int i = 0; i < n; i++){
        result = result + (*(pav1 + i) * *(pav2 + i));
    }
    //Devolucion del valor resultado
    return result;
}

void sumaMatrices(float* p1, float* p2, float* par, const int& m, const int& n){
    //Declaracion de la ecuacion dispuesta en el ejercicio 7
    for (int i = 0; i < n*m; i++){
        *(par + i) = *(p1 + i) + *(p2 + i);
    }
} 