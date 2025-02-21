#include<iostream>
#include<string>
#include"coche.h"
#include"mesaCuadrada.h"
using namespace std;

int main(){
    //coche
    coche nuevo;
    string a = nuevo.getNombre();
    double b = nuevo.getVelocidad();
    //prueba del construtor
    cout << a << " " << b << endl;
    //declaracion de los parametros de mi objeto
    nuevo.setNombre("Mazda mx5 1998");
    nuevo.setVelocidad(70);
    //salida de datos
    cout << "Tengo un " << nuevo.getNombre() << " y estoy conduciendo a una velocidad de: " << nuevo.getVelocidad() << endl << endl; 
    //Declaración de un objeto de tipo mesa
    mesaCuadrada nuevaMesa;
    nuevaMesa.setPatas(4); //no es necesario ya que el default del constructor es 4
    nuevaMesa.setLado(7.0);
    nuevaMesa.setcolor("blanco");
    //salida de datos
    cout << "Mi mesa tiene " << nuevaMesa.getPatas() << " patas, posee " << nuevaMesa.getLado() << " cm de lado y es de color " << nuevaMesa.getColor() << endl;
    cout << "Tambien se que mi mesa tiene un area de: " << nuevaMesa.getLado() * nuevaMesa.getLado();
    return 0;
}