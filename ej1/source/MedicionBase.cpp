#include "../include/MedicionBase.hpp" 

MedicionBase::MedicionBase(): 
    tiempoMedicion{make_unique<float>(0.0)}{} //contructor para objetos vacios

MedicionBase::MedicionBase(float tiempo):
    tiempoMedicion{make_unique<float>(tiempo)}{}//un atributo que es unique ptr se debe inicializar de esta manera

MedicionBase::MedicionBase(const MedicionBase& medicion):
    tiempoMedicion{make_unique<float>(*medicion.tiempoMedicion)}{}
    //creo un puntero nuevo distinto al del objeto para poder copiar el objeto

float MedicionBase::getTiempo(){ 
    return *tiempoMedicion; 
} 

void MedicionBase::serializar(ofstream& out) {
    out.write(reinterpret_cast<char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));
}

void MedicionBase::deserializar(ifstream& out) {
    out.read(reinterpret_cast<char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));
}