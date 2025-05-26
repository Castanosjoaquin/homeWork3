#pragma once
#include <iostream>
#include "Punto.hpp"

using namespace std; 

class Elipse
{
private:
    double maxRadio; 
    double minRadio;
    Punto posicion; //centro de la elipse
public:
    Elipse( double max=1,double min=1,double x =0 , double y=0);
    ~Elipse() = default;
    void setRadios(double max, double min);
    void setMaxRadio(double max);
    void setMinRadio(double min);
    double getMaxRadio() const; 
    double getMinRadio() const;
    Punto getPosicion();
    

};