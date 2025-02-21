#include<string>

using namespace std;

class movil{
    private:
        int IMEI;
        string modelo;
        int numero;
    public:
        movil();
        void setIMEI(int imei);
        void setModelo(string modelo);
        void setNumero(int numero);
        int getIMEI();
        string getModelo();
        int getNumero();

};