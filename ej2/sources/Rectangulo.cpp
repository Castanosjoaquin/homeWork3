#include "../includes/Rectangulo.hpp"

Rectangulo::Rectangulo(double w, double h, double x, double y):
    width(w), height{h}, posicion{Punto(x,y)}{}


void Rectangulo::setHeight(double h) {
    height = h;
}

void Rectangulo::setWidth(double w) {
    width = w;
}

double Rectangulo::getWidth() const {
    return width;
}

double Rectangulo::getHeight() const {
    return height;
}

Punto Rectangulo::getPosicion(){ 
    return posicion; 
}