#pragma once
#include <iostream>
#include "Punto.hpp"

using namespace std; 

class Circulo
{
private:
    double radio; 
    Punto posicion; //centro del circulo

public:
    Circulo(double r=1, double x=0,double y=0);
    ~Circulo() =default;
    void setRadio(double r); 
    double getRadio()const; 
    Punto getPosicion(); 
};
