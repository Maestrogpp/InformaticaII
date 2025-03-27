#pragma once
#include<string>

using namespace std;

class Geometric{
    private:
        int lados;
        float superficie;
        int dimension;
    
    public:
        Geometric();
        Geometric(int lados, float superficie, int dimension);

        //getters-setters
        void setLados(int lados);
        void setSuperficie(float superficie);
        void setDimension(int dimension);

        int getLados();
        float getSuperficie();
        int getDimension();
        virtual string toString();
};  