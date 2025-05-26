#include "../includes/ProcesadorFigura.hpp"
#include "../includes/Elipse.hpp"
#include "../includes/Punto.hpp"
#include "../includes/Rectangulo.hpp"
#include "../includes/Circulo.hpp"

int main(){ 
    Circulo c; 
    Elipse e ; 
    Rectangulo r; 
    Punto p; 
 
    cout<<"Area de figuras default"<<endl;
    cout << "Area del circulo: " << ProcesadorFigura<Circulo>::calcArea(c) << std::endl;
    cout << "Area de la elipse: " << ProcesadorFigura<Elipse>::calcArea(e) << std::endl;
    cout << "Area del rectangulo: " << ProcesadorFigura<Rectangulo>::calcArea(r) << std::endl;
    cout << "Area del punto: " << ProcesadorFigura<Punto>::calcArea(p) << std::endl;

    Circulo c2(2,1,5);
    Elipse e2(2,6,5,4); 
    Rectangulo r2(2,8,7,8); 
    Punto p2(5,1);

    cout<<"Area de figuras particulares"<<endl;
    cout << "Area del circulo: " << ProcesadorFigura<Circulo>::calcArea(c2) << std::endl;
    cout << "Area de la elipse: " << ProcesadorFigura<Elipse>::calcArea(e2) << std::endl;
    cout << "Area del rectangulo: " << ProcesadorFigura<Rectangulo>::calcArea(r2) << std::endl;
    cout << "Area del punto: " << ProcesadorFigura<Punto>::calcArea(p2) << std::endl;
}