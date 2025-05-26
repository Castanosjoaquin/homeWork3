#include "../includes/Elipse.hpp" 

Elipse::Elipse(double max,double min, double x, double y): 
    maxRadio{max}, minRadio{min}, posicion{Punto(x,y)}{}

void Elipse::setRadios(double max, double min){ 
    maxRadio = max ; 
    minRadio = min; 
}

void Elipse::setMaxRadio(double max){ 
    maxRadio = max ; 
}

void Elipse::setMinRadio( double min){ 
    minRadio = min; 
}

double Elipse::getMaxRadio()const{ 
    return this->maxRadio; 
}
double Elipse::getMinRadio()const{ 
    return this->minRadio; 
}

Punto Elipse::getPosicion(){ 
    return posicion; 
}