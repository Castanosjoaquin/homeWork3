#pragma once
#include <iostream>
#include "Punto.hpp"

using namespace std; 

class Rectangulo
{
private:
    double width;
    double height ;
    Punto posicion; // esquina superior derecha

public:
    Rectangulo(double w=1, double h=1, double x=-1, double y =1);
    ~Rectangulo() = default;
    double getWidth() const ;
    double getHeight() const ;
    void setWidth(double w) ;
    void setHeight(double h);
    Punto getPosicion();
};