#include "../include/Posicion.hpp"

Posicion::Posicion(): 
    MedicionBase(), latitud{0.0},longitud{0.0}, altitud{0.0}{}

Posicion::Posicion(float lat,float lon, float alt, float t): 
    MedicionBase(t), latitud{lat}, longitud{lon}, altitud{alt}{}
 
Posicion::Posicion(const Posicion& posicion): // creo una copia del objeto
    MedicionBase(posicion), latitud{posicion.latitud}, longitud{posicion.longitud}, altitud{posicion.altitud}{}

void Posicion::serializar(ofstream& out){
    out.write(reinterpret_cast<char*> (&latitud),sizeof(latitud));
    out.write(reinterpret_cast<char*> (&altitud),sizeof(altitud));
    out.write(reinterpret_cast<char*> (&longitud),sizeof(longitud));
    MedicionBase::serializar(out);
}

void Posicion::deserializar(ifstream& in){ 
    in.read(reinterpret_cast<char*> (&latitud),sizeof(latitud));
    in.read(reinterpret_cast<char*> (&altitud),sizeof(altitud));
    in.read(reinterpret_cast<char*> (&longitud),sizeof(longitud));
    MedicionBase::deserializar(in);
}

void Posicion::imprimir( ){ 
    cout<<"Posicion: "<<endl;
    cout<< "    -Latitud: "<< latitud<<endl; 
    cout<< "    -Longitud: "<< longitud<<endl; 
    cout<< "    -altitud: "<< altitud<<endl; 
    cout<< "    -Tiempo: "<< *tiempoMedicion<<endl; 

}