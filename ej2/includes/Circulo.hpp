#pragma once
#include <iostream>

using namespace std; 

class Circulo
{
private:
    double radio; 
public:
    Circulo(double r=1);
    ~Circulo() =default;
    void setRadio(double r); 
    double getRadio()const; 
};
