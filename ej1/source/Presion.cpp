#include "../include/Presion.hpp"

Presion::Presion(): 
    MedicionBase(), presionEstatica{0.0}, presionDinamica{0.0}{} //inicializacion default

Presion::Presion(float p, float q, float t): 
    MedicionBase(t), presionEstatica{p}, presionDinamica{q}{}
 
Presion::Presion(const Presion& presion): 
    MedicionBase(presion), presionEstatica{presion.presionEstatica}, presionDinamica{presion.presionDinamica}{}// contrucion por copia

void Presion::serializar(ofstream& out){ 
    out.write(reinterpret_cast<char*>(&presionEstatica),sizeof(presionEstatica));
    out.write(reinterpret_cast<char*>(&presionDinamica),sizeof(presionDinamica));
    MedicionBase::serializar(out);
}

void Presion::deserializar(ifstream& in){ 
    in.read(reinterpret_cast<char*>(&presionEstatica),sizeof(presionEstatica));
    in.read(reinterpret_cast<char*>(&presionDinamica),sizeof(presionDinamica));
    MedicionBase::deserializar(in);
}

void Presion::imprimir(){    
    cout<<"Presion:"<<endl;
    cout<< "    - Presion Estatica: "<< presionEstatica<<endl;
    cout<< "    - Presion Dinamica: "<< presionDinamica<<endl;
    cout<< "    - Tiempo: "<< *tiempoMedicion<<endl;      
} 