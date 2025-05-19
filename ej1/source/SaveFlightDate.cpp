#include "../include/SaveFlightDate.hpp"
SaveFlightDate::SaveFlightDate():
    presion(), posicion(){}

SaveFlightDate:: SaveFlightDate(const Presion& p, const Posicion& q): 
    presion{p}, posicion{q}{}

void SaveFlightDate::serializar(ofstream& out){ 
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