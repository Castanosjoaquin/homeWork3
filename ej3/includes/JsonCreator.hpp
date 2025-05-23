#pragma once
#include "VectorGenerator.hpp"


// template<typename T>
class JsonCreator
{
private:
    
public:
    JsonCreator() = default;
    ~JsonCreator() = default;
    template<typename T>
    string asociar(VectorGenerator<T> ){ 
        string result = ""; 
        if constexpr(is_same_v<T,double>){
            result = "\"vec_doubles\""; 
        }
        if constexpr(is_same_v<T,string>){
            result = "\"palabras\""; 
        }
        if constexpr(is_same_v<T,vector<int>>){
            result = "\"listas\""; 
        }
        return result; 
    } 

    void printJson(VectorGenerator<double> doubleVect, VectorGenerator<string> stringVect ,VectorGenerator<vector<int>> matrix){ 
        cout<<"{"+ asociar(doubleVect)+ ":"+ doubleVect.procesar()<<endl;
        cout<<" "+ asociar(stringVect)+ ":"+ stringVect.procesar()<<endl; 
        cout<<" " + asociar(matrix)+ ":"+ matrix.procesar()<<endl;
        cout<<"}\n"; 
    }   


}; 