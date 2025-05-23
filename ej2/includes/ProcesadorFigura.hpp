#pragma once
#include <iostream>
#include <string>

#define _USE_MATH_DEFINES
#include <cmath> //para usar la constante pi

#include "Circulo.hpp"
#include "Elipse.hpp"
#include "Rectangulo.hpp"
#include "Punto.hpp"


using namespace std; 

//segun el tipo que T sea calcula el area de manera diferentes, si no es una conocida no la calcula
template<typename T>
class ProcesadorFigura{
public:
    static double calcArea(T ){ 
        cout<<"No se puedo calcular el area"<<endl;
        return 0;
    }; 
};

template<> 
class ProcesadorFigura <Circulo>{ 
public:
    static double calcArea(Circulo circulo){ 
        return M_PI* circulo.getRadio()*circulo.getRadio(); 
    }
};

template<> 
class ProcesadorFigura<Elipse>{ 
public:
    static double calcArea(Elipse elipse){ 
        return M_PI* elipse.getMaxRadio() * elipse.getMinRadio(); 
    }
};

template<> 
class ProcesadorFigura <Rectangulo>{ 
public:
    static double calcArea(Rectangulo rect){ 
        return rect.getHeight()* rect.getWidth(); 
    }
};



