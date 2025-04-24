/* 
Nombre: Felipe Maestro Álvarez
Fecha: 04/04/2025
Docente: Manuel E. Gantiva
Descripción: Tema 6
Puntos: 2
*/
#include"Cuenta.h"
#include"Cliente.h"
#include"persona.h"
#include<iostream>
using namespace std;

int main(){
    //Instanciamos los objetos
    Cuenta cuenta1("ES2983904", 0);
    Persona persona1("Juanjo", "29563698G");
    Cliente cliente1(persona1, cuenta1);
    Cuenta cuenta2("ES372349389", 150);
    Persona persona2("David", "46498237K");
    Cliente cliente2(persona2, cuenta2);
    //Prueba de salidas a pantalla
    cout << "Clientes: " <<  cliente1 << "   " << cliente2 << endl;
    cout << "Cuentas: " << cuenta1 << "   " << cuenta2 << endl;
    cout << "Informacion Personal: " << persona1 << "   " << cuenta2 << endl;
    cout << cliente1.toString() << "   " << cliente2.toString() << endl;
    cout << persona1.toString() << "   " << persona2.toString() << endl;
    cout << cuenta1.toString() << "   " <<  cuenta2.toString() << endl;
    cout << endl << endl << endl;
    //Funcionalidades
    if(cliente1.getCuenta() < cliente2.getCuenta()){
        cout << cliente2.getNombre() << " tiene mas dinero que " << cliente1.getNombre() << endl;
    }else{
        cout << cliente1.getNombre() << " tiene mas dinero que " << cliente2.getNombre() << endl;
    }
    cout << cliente1.getNombre() << " ha recibido un ingereso de 200 dolares" << endl;
    cuenta1 = cuenta1 + 200;
    cliente1.setCuenta(cuenta1);
    if(cliente1.getCuenta() < cliente2.getCuenta()){
        cout << cliente2.getNombre() << " tiene mas dinero que " << cliente1.getNombre() << endl;
    }else{
        cout << cliente1.getNombre() << " tiene mas dinero que " << cliente2.getNombre() << endl;
    }
    if(cliente1.getNombre() == cliente2.getNombre()){
        cout << "Hay dos cuentas con el mismo nombre, por favor solucione el problema " << endl;
    }else{
        cout << "Todo correcto " << endl;
    }
    return 0;
}