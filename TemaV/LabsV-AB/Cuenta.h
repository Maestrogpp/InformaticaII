#include<string>
using namespace std;

class Cuenta{
    private:
        string numero;
        float saldo;
    public:
        Cuenta();
        Cuenta(string numero, float saldo);
        const bool operator<(const Cuenta& otra);
        Cuenta operator+(const float& monto);
        friend ostream& operator<<(ostream& os, Cuenta& cuenta);
        //getters-setters
        string getNumero();
        float getSaldo();
        void setNumero(string numero);
        void setSaldo(float Saldo);
        string toString();
};