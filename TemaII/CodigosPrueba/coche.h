#include<string>

using namespace std;

class coche{
    private:
        string nombre;
        double velocidad;
    public:
        string matricula;
        coche();
        void setNombre(string nombre);
        string getNombre();
        void setVelocidad(double velocidad);
        double getVelocidad();

};