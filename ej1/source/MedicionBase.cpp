#include "../include/MedicionBase.hpp" 

MedicionBase::MedicionBase(float tiempo){ 
    this->tiempoMedicion = make_unique<float>(tiempo);
}
MedicionBase::MedicionBase(const MedicionBase& medicion){ 
    this->tiempoMedicion = make_unique<float>(*medicion.tiempoMedicion); 
}//creo un puntero nuevo distinto al del objeto

float MedicionBase::getTiempo(){ 
    return *this->tiempoMedicion; 
} 

void MedicionBase::serializar(ofstream& out) {
    out.write(reinterpret_cast<char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));
}

void MedicionBase::deserializar(ifstream& out) {
    out.read(reinterpret_cast<char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));
}