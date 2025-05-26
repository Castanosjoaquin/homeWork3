#include "../includes/Circulo.hpp"

Circulo::Circulo(double r,double x, double y): 
    radio{r},posicion{Punto(x,y)}{}

void Circulo::setRadio(double r){ 
    radio = r; 
}

double Circulo::getRadio()const{ 
    return this->radio;
}

Punto Circulo::getPosicion(){ 
    return posicion; 
}