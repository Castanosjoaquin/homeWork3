#include "../include/Presion.hpp"

Presion::Presion(float p, float q, float t): 
    MedicionBase(t), presionEstatica{p}, presionDinamica{q}{}
 
Presion::Presion(const Presion& presion): 
    MedicionBase(presion), presionEstatica{presion.presionEstatica}, presionDinamica{presion.presionDinamica}{}

void Presion::serializar(ofstream& out){ 
    out.write(reinterpret_cast<char*>(&presionEstatica),sizeof(presionEstatica));
    out.write(reinterpret_cast<char*>(&presionDinamica),sizeof(presionDinamica));
    out.write(reinterpret_cast<char*>(&tiempoMedicion),sizeof(tiempoMedicion));
}

void Presion::deserializar(ifstream& in){ 
    in.read(reinterpret_cast<char*>(&presionEstatica),sizeof(presionEstatica));
    in.read(reinterpret_cast<char*>(&presionDinamica),sizeof(presionDinamica));
    in.read(reinterpret_cast<char*>(&tiempoMedicion),sizeof(tiempoMedicion));
}

void Presion::imprimir(){    
    cout<< "Presion Estatica: "<< presionEstatica<<endl;
    cout<< "Presion Dinamica: "<< presionDinamica<<endl;
    cout<< "Tiempo: "<< *tiempoMedicion<<endl;      
} 