//librerias , utilidades y ficheros de conexion
#include<iostream>
#include"cabecera.h"

using namespace std;

int main(){
    //inicializacion las variables para hacer el loop y el switch case del menu
    int option;
    bool state = true;

    //Declaracion el menu y entrada de datos para ejecutar los ejercicios
    //Utilizacion de while para que se repita una y otra vez a menos que se quiera salir
    while(state == true){
        cout << "indique el numero del ejercicio a ejecutar (1, 3, 5, 7), para salir utilice 9" << endl;
        cin >> option;
        cout << endl;
        switch(option){
            case 1:{
                //Asignacion de variable
                float f1 = 90;
                //Asignacion de la referencia
                float &ref_f1 = f1;
                //llamada a funcion - pass-by-reference
                ejercicio1(ref_f1);
                break;
            }
            case 3:{
                //Asignacion de variables
                int a = 10;
                double b = 8.1;
                long c = 6;
                //Asignacion de punteros
                int* pe = &a;
                double* pd = &b;
                //Llamada a funcion - pass-by-pointer
                ejercicio3(pe, pd, c);
                break;
            }
            case 5:{
                //Declaracion de variables y vectores
                int n = 6;
                int matriz1[n];
                int matriz2[n];
                //Inicialización de los vectores
                for(int i = 0; i < n; i++){
                    matriz1[i] = i + 1;
                    matriz2[i] = i + 1;
                }
                //Asignacion de punteros
                int* pav1 = &matriz1[0];
                int* pav2 = &matriz2[0];
                //Llamada a funcion - (Pass-by-pointer & Pass-by-value)
                int result = multiplicarVectores(pav1, pav2, n);
                //Salida a pantalla del resultado - comprobacion de resultados
                cout << "El resultado de la multiplicaion de vectores es: " << result << endl;
                break;
            }
            case 7:{
                //Comentario sin relacion con el codigo - soy consciente de que me he complicado la vida bastante pero queria experimentar con las matrices y los punteros
                //Declaracion de variables y matrices
                int m, n;
                int cont = 0;
                /*La variable a servira para calcular cuantos espacios de memoria debemos saltar para asignar 
                correctamente los valores a la matriz por medio de gestion de memoria*/
                int a = 0;
                static const int n = 9;
                static const int m = 6;
                //Asignacion de referencias para mayor eficiencia
                int &ref_m = m;
                int &ref_n = n;
                //El tamaño de matriz maximo que se soporta es 20x20
                float matriz1[n][m];
                float matriz2[n][m];
                float result[n][m];
                //Asignación de punteros
                float* pam1 = &matriz1[0][0];
                float* pam2 = &matriz2[0][0];
                /*Utilizo puntero e inicializo la matriz resultado en el main para poder operar con ella
                en utils evitando problemas*/
                float* par = &result[0][0];
                //inicializacion de las matrices por medio de punteros
                for (int i = 0; i < n*m; i++){
                    //Se toma en cuenta la cantidad de columnas que tiene la matriz deseada ya que se hace por memoria
                    if(cont > n-1){
                        cont = 0;
                        a = a + (20 - n);
                    }
                    *(pam1 + i + a) = i;
                    *(pam2 + i + a) = i;
                    cont++;
                }
                //llamada a funcion - (Pass-by-reference & Pass-by-pointer)
                sumaMatrices(pam1, pam2, par, ref_m, ref_n);
                /*Se reinician al valor inicial de a y cont debido a que es esencial para los saltos en memoria, 
                ya que hay valores en columnas y filas que no e utilizaran a menos que utilicemos la matriz 
                de tamaño maximo*/
                a = 0;
                cont = 0;
                //Salida a pantalla del resultado
                cout << "El resultado de la suma sera la siguiente matriz: " << endl << endl;
                for (int i = 0; i < n*m; i++){
                    if(cont > n-1){
                        cont = 0;
                        a = a + (20 - n);
                        cout << endl;
                    }
                    cout << *(par + i + a) << " ";
                    cont++;
                }
                cout << endl;
                break;
            }
            case 9:{
                //Finalización del programa
                cout << "exiting" << endl;
                state = false;
                break;
            }
            default:{
                //Defino los casos en los que si se ha introducido una opcion valida
                if (option != 1 && option != 3 && option != 5 && option != 7 && option != 9){
                    cout << "Opcion no contemplada" << endl << endl;
                }
                break;
            }
        }
    }

}