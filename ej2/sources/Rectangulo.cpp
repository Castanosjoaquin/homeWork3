#include "../includes/Rectangulo.hpp"

Rectangulo::Rectangulo(double w, double h):
    width(w), height{h}{}


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