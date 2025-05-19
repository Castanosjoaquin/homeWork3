#pragma once
#include <iostream>

using namespace std; 

class Elipse
{
private:
    double maxRadio; 
    double minRadio;
public:
    Elipse( double max=1,double min=1);
    ~Elipse() = default;
    void setRadios(double max, double min);
    void setMaxRadio(double max);
    void setMinRadio(double min);
    double getMaxRadio() const; 
    double getMinRadio() const;

};