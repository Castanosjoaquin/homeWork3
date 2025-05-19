#pragma once
#include <iostream> 

using namespace std; 

class Punto
{
private:
    double posX; 
    double posY;
public:
    Punto(double x=0, double y=0);
    ~Punto()= default;
    void setX(double x);
    void setY(double y);
    void setXY(double x,double y);
    double getX()const;
    double getY()const;
};
