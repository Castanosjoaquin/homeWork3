#pragma once
#include <iostream>

using namespace std; 

class Rectangulo
{
private:
   double width;
   double height ;
public:
    Rectangulo(double w=1, double h=1);
    ~Rectangulo() = default;
    double getWidth() const ;
    double getHeight() const ;
    void setWidth(double w) ;
    void setHeight(double h);
};