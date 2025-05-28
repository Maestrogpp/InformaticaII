#include"Cuenta.h"
#include"Persona.h"

class Cliente : public Persona{
    private:
    Cuenta cuenta;
    public:
        Cliente();
        Cliente(string nombre, string DNI, Cuenta cuenta);
        Cliente(Persona persona, Cuenta cuenta);
        friend ostream& operator<<(ostream& os, Cliente& cliente);
        //getters-setters 
        Cuenta getCuenta();
        void setCuenta(Cuenta cuenta);
        string toString();
};