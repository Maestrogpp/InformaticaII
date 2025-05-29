#pragma once
#include<string>

using namespace std;

class Entero{
    private:
        static int factor_tolerancia;
        string name;
    public:
        Entero();
        float operator*(int n);
        float operator/(int n);
        int getTolerance();
};