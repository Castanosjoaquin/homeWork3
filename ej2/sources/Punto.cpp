#include "../includes/Punto.hpp"

Punto::Punto(double x, double y): 
    posX{x}, posY{y}{}


void Punto::setX(double x) {
    posX = x;
}

void Punto::setY(double y) {
    posY = y;
}
void Punto::setXY(double x, double y){ 
    posX = x;
    posY = y;
}

double Punto::getX() const {
    return posX;
}

double Punto::getY() const {
    return posY;
}
