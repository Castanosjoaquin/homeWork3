#pragma once
#include "MedicionBase.hpp" 
#include <fstream>

class Posicion : public MedicionBase
{
public:
    float latitud; 
    float longitud; 
    float altitud; 
    
    Posicion(float lat,float lon, float alt, float t);
    Posicion(const Posicion& posicion); // contructor de copia
    ~Posicion()= default;
    void serializar(ofstream& out) override; 
    void deserializar(ifstream& in) override; 
    void imprimir() override; 
}; 
