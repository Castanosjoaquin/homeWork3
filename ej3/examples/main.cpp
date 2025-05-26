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
    j.printJson(v1,v2,v3); 


    VectorGenerator<double> v4;
    VectorGenerator<string> v5;
    VectorGenerator<vector<int>> v6;

    v4.add(5.1);
    v4.add(5.9);
    v4.add(6.0);

    v5.add("hello");
    v5.add("Word");

    v6.add({2,4}); 
    v6.add({6,7}); 
    cout<<endl; 

    JsonCreator j2;
    j2.asociar(v4); 
    j2.asociar(v5); 
    j2.asociar(v6); 
    j2.printJson();

    return 0;
 }