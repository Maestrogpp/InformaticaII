#include<string>
using namespace std;

typedef struct{
    float x;
    float y;
    float z;
}position;

typedef struct{
    int h;
    int m;
    int s;
}tiempo;

class Barquito{
    private:
        position posicion;
        position* operatorPosition;
        float velocidad;
    public:
        float getVelocidad();
        position getPosition();
        position* getOperationPosition();
        void setVelocidad(float new_velocidad);
        void setPosition(float a, float b, float c);
        void setOperationPosition(position* new_operator);
};

class Velocimetro{
    private:
        position posicion_actual;
        position posicion_anterior;
        tiempo contador;
    public:
        void setPosition(position position);
        void setLastPosition(position last_position);
        void setcontador(tiempo new_time);

        float calcularVelocidad(int tiempo);
};