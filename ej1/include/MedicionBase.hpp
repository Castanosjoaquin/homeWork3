#pragma once
#include "IMediciones.hpp"
#include <memory>
#include <fstream>

class MedicionBase: public IMediciones
{
protected:
    unique_ptr<float> tiempoMedicion; 
public: 
    MedicionBase(float tiempo);
    MedicionBase(const MedicionBase& medicion); // contructor de copia 
    virtual ~MedicionBase() = default;
    float getTiempo(); 
    virtual void imprimir() =0;
    void serializar(ofstream& out) override; 
    void deserializar(ifstream& in) override; 
};


          