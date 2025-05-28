#include"ListaDeReproduccion.h"
#include"Cliente.h"
int main(){
    //Ejercicio 1
    Musica a("New Era", "Duki", 217);
    ListaDeReproduccion random(a);
    //Play
    random.setReproduciendo();
    cout << random.getReproduciendo().toString() << endl;
    Musica b("Borderline","Ely Oaks", 290);
    Musica c("Evergreen","Richy Mitch & The Coal Miners",180);
    random += b;
    random += c;
    random.setReproduciendo(2);
    cout << random.getReproduciendo().toString() << endl;
    random.setReproduciendo(b);
    cout << random.getReproduciendo().toString() << endl;
    cout << endl;
    cout << random.toString() << endl;
    random += b;
    cout << random.toString() << endl;
    cout << endl;
    if(random.getReproduciendo() < 200){
        cout << "la cancion reproduciendose dura menos de 3 minutos" << endl;
        cout << random.getReproduciendo().toString();
    }else{
        cout << "la cancion reproduciendose dura mas de 3 minutos" << endl;
        cout << random.getReproduciendo().toString();
    }
    cout << endl << endl << endl << endl;
    //Ejercicio 2
    Cuenta Cuenta1("30948292", 100);
    Cliente Cliente1("Felipe Maestro Alvarez", "29903494G", Cuenta1);
    Cuenta cuenta2("39821928", 200);
    Persona persona2("Marta Gutierrez Pasion", "98373449K");
    Cliente clienta2(persona2, cuenta2);
    cout << Cliente1.toString() << endl;
    Cliente1.getCuenta() + 230;
    cout << Cliente1.toString() << endl;
    if (Cliente1.getCuenta() < clienta2.getCuenta()){
        cout << Cliente1.getNombre() << " es mas pobre que " << clienta2.getNombre() << endl;
    }else{
        cout << clienta2.getNombre() << " es mas pobre que " << Cliente1.getNombre() << endl;
    }
    cout << endl << endl;
    cout << Cliente1 << endl;
    cout << clienta2 << endl;
    if(Cliente1 == clienta2){
        cout << "Usuario repetido" << endl;
    }else{
        cout << "No se ha detectado ningun error en la base de datos" << endl;
    }
    cout << endl << endl;
    cout << persona2;
    return 0;
}