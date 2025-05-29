#pragma once
#include "VectorGenerator.hpp"
#include <vector>
#include <utility>



class JsonCreator
{
private:   
    vector<string> data; 
public:
    JsonCreator():
       data{}{}
    ~JsonCreator() = default;

    template<typename T> 
    void asociar(VectorGenerator<T> vec, string label ){ 
        data.push_back("\""+ label + "\"" +":"+vec.procesar()) ;
    } 


    void printJson(){ 
        cout<<"{"<<data[0]<<endl;
        for(size_t i=1; i<data.size();i++){ 
            cout<<" "+ data[i]<<endl;
        }
        cout<<"}\n"; 
    }   
}; 