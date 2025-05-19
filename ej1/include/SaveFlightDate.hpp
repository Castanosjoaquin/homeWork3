#pragma once
#include "Posicion.hpp"
#include "Presion.hpp"
#include <fstream>

class SaveFlightDate{
public:    
    Presion presion; // p 
    Posicion posicion; //q

    SaveFlightDate(); 
    SaveFlightDate(const Presion& p, const Posicion& q);
    ~SaveFlightDate() = default;
    void serializar(ofstream& out); 
    void deserializar(ifstream& in); 
    void imprimir(); 


};

