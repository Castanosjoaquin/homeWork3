#pragma once
#include "Posicion.hpp"
#include "Presion.hpp"
#include <fstream>

class SaveFlightDate{
public:    
    Presion presion; // p 
    Posicion posicion; //q


    SaveFlightDate(const Presion& p, const Posicion& q);
    ~SaveFlightDate() = default;
    void serialiar(ofstream& out); 
    void deserializar(ifstream& out); 
    void imprimir(); 


};

