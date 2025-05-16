#include "../include/Posicion.hpp"

Posicion::Posicion(float lat,float lon, float alt, float t): 
    MedicionBase(t), latitud{lat}, longitud{lon}, altitud{alt}{}
 
Posicion::Posicion(const Posicion& posicion): // creo una copia del objeto
    MedicionBase(posicion), latitud{posicion.latitud}, longitud{posicion.longitud}, altitud{posicion.altitud}{}

void Posicion::serializar(ofstream& out){
    out.write(reinterpret_cast<char*> (&latitud),sizeof(latitud));
    out.write(reinterpret_cast<char*> (&altitud),sizeof(altitud));
    out.write(reinterpret_cast<char*> (&longitud),sizeof(longitud));
    out.write(reinterpret_cast<char*> (&tiempoMedicion),sizeof(tiempoMedicion));
}

void Posicion::deserializar(ifstream& out){ 
    out.read(reinterpret_cast<char*> (&latitud),sizeof(latitud));
    out.read(reinterpret_cast<char*> (&altitud),sizeof(altitud));
    out.read(reinterpret_cast<char*> (&longitud),sizeof(longitud));
    out.read(reinterpret_cast<char*> (&tiempoMedicion),sizeof(tiempoMedicion));
}

void Posicion::imprimir( ){ 
    cout<< "Latitud: "<< latitud<<endl; 
    cout<< "Longitud: "<< longitud<<endl; 
    cout<< "altitud: "<< altitud<<endl; 
    cout<< "Tiempo: "<< *tiempoMedicion<<endl; 

}