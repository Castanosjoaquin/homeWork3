#include "../include/SaveFlightDate.hpp"

SaveFlightDate:: SaveFlightDate(const Presion& p, const Posicion& q): 
    presion{p}, posicion{q}{}

void SaveFlightDate::serialiar(ofstream& out){ 
    posicion.serializar(out);
    presion.serializar(out);
}

void SaveFlightDate::deserializar(ifstream& in){ 
    posicion.deserializar(in);
    presion.deserializar(in);
}

void SaveFlightDate::imprimir(){
    posicion.imprimir();
    presion.imprimir();
}