#pragma once
#include<string>

using namespace std;

class Flotante{
    private:
        static float factor_tolerancia;
        string name;
    public:
        Flotante();
        float operator*(int n);
        float operator/(int n);
        float getTolerance();
};