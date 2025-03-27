#pragma once
#include<string>
#include"FormasGeometricas.h"

class cuadrado : public Geometric{
    private:
        float longitudlado;
        string nombreFigura;
    public:
    cuadrado();
    cuadrado(float longitudlado);

    void setLongitudlado(float lado);
    void setNombrefigura(string nombre);
    float getLongitudlado();
    string getNombrefigura();
    string toString();

};