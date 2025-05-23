#include "../include/MedicionBase.hpp"
#include "../include/Presion.hpp"
#include "../include/Posicion.hpp"
#include "../include/SaveFlightDate.hpp"

int main(){ 
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);
    SaveFlightDate date(presion, posicion ); 
    cout<<"Info de date"<<endl; 
    date.imprimir();  

    ofstream out("FlightData.dat", ios::binary); 
    if(out.is_open()){ 
        date.serializar(out);
    }
    out.close();
 
    SaveFlightDate date2; 
    cout<< "\nInfo de date2 antes deserializar la info de date " <<endl; 
    date2.imprimir();

    cout<<"\nInfo date2 despues de deserializar la info de date"<<endl;
    ifstream in("FlightData.dat", ios::binary); 
    if(in.is_open()){ 
        date2.deserializar(in);
    }
    date2.imprimir();
    in.close();
}