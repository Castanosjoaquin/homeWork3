#pragma once
#include "MedicionBase.hpp"
#include <fstream>

class Presion: public MedicionBase
{
public: 
    float presionEstatica; //p 
    float presionDinamica; //q

    Presion( float p,float q, float t );
    Presion(const Presion& presion) ;// contructor de copia 
    ~Presion() = default;
    void serializar(ofstream& out) override;  
    void deserializar(ifstream& in) override; 
    void  imprimir() override; 

    
};

