#include "../includes/Circulo.hpp"

Circulo::Circulo(double r): 
    radio{r}{}

void Circulo::setRadio(double r){ 
    radio = r; 
}

double Circulo::getRadio()const{ 
    return this->radio;
}

