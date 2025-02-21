#include<string>

using namespace std;

class mesaCuadrada{
    private:
     int patas;
     float lado;
     string color;
    public:
     mesaCuadrada();
     void setPatas(int patas);
     void setLado(float lado);
     void setcolor(string color);
     int getPatas();
     float getLado();
     string getColor();
     float obtenerArea();

};