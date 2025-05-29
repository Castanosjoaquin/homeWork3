#include"../includes/VectorGenerator.hpp"
#include"../includes/JsonCreator.hpp"

#include <vector>

int main (){
    
    VectorGenerator<double> v1;
    VectorGenerator<string> v2;
    VectorGenerator<vector<int>> v3;

    v1.add(1.3);
    v1.add(2.1);
    v1.add(3.2);

    v2.add("Hola");
    v2.add("Mundo");

    v3.add({1, 2});
    v3.add({3,4});

    JsonCreator j; 
    j.asociar(v1,"vec_double"); 
    j.asociar(v2, "palabras"); 
    j.asociar(v3, "listas"); 
    j.printJson();



    return 0;
 }