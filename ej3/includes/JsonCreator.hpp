#pragma once
#include "VectorGenerator.hpp"
#include <utility>


// template<typename T>
class JsonCreator
{
private: 
    pair<string,VectorGenerator<double>> doubleVectInfo; 
    pair<string,VectorGenerator<string>> stringVectInfo; 
    pair<string,VectorGenerator<vector<int>>> matrixInfo; 

public:
    JsonCreator():
        doubleVectInfo{},stringVectInfo{}, matrixInfo{}{}
    ~JsonCreator() = default;
    template<typename T>
    string asociar(VectorGenerator<T> vec ){ 
        string result = ""; 
        if constexpr(is_same_v<T,double>){
            result = "\"vec_doubles\""; 
            doubleVectInfo = {result,vec };
        }
        if constexpr(is_same_v<T,string>){
            result = "\"palabras\""; 
            stringVectInfo = {result, vec };
        }
        if constexpr(is_same_v<T,vector<int>>){
            result = "\"listas\""; 
            matrixInfo ={result, vec };
        }
        return result; 
    } 

    void printJson(VectorGenerator<double> doubleVect, VectorGenerator<string> stringVect ,VectorGenerator<vector<int>> matrix){ 
        cout<<"{"+ asociar(doubleVect)+ ":"+ doubleVect.procesar()<<endl;
        cout<<" "+ asociar(stringVect)+ ":"+ stringVect.procesar()<<endl; 
        cout<<" " + asociar(matrix)+ ":"+ matrix.procesar()<<endl;
        cout<<"}\n"; 
    }   

    void printJson(){ 
        cout<<"{"+ doubleVectInfo.first+ ":"+ doubleVectInfo.second.procesar()<<endl;
        cout<<" "+ stringVectInfo.first + ":"+ stringVectInfo.second.procesar()<<endl; 
        cout<<" " + matrixInfo.first + ":"+ matrixInfo.second.procesar()<<endl;
        cout<<"}\n"; 
    }   
}; 