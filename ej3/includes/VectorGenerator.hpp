#pragma once
#include <iostream> 
#include <vector>
#include <string>
#include <type_traits>
#include <cmath>

using namespace std; 
template<typename T>
class VectorGenerator{    
private: 
    vector<T> vec; 

public:  
    VectorGenerator():
        vec{}{}
    ~VectorGenerator() = default;
    void add(T t){ 
        vec.push_back(t); 
    }
    
    string procesar(){
        string result = "";
        if constexpr(is_arithmetic_v<T>){
            result += "[";
            for(size_t i=0; i<vec.size();i++){ 
                string strDouble= to_string(vec[i]); // si sumo la funcion to string derecho me lo pone con 6 decimales
                size_t pointIndex = strDouble.find('.'); //busco el indice del punto en el str
                result += strDouble.substr(0, pointIndex + 2); //creo un substring hasta dos decimales

                if( i != vec.size()-1){ //si no estoy en la ultima posicion pongo la coma
                    result +=","; 
                }
            }
            result+="],";    
        }
        if constexpr(is_same_v<T, string>){ 
            result += "[";
            for(size_t i=0; i<vec.size(); i++){ 
                result += "\"" + vec[i] + "\"";// para poder imprimir las comillas, estas debene escaparse
                if( i != vec.size()-1){ 
                    result +=","; 
                }
            }
            result+="],"; 
        }
        if constexpr(is_same_v<T, vector<int>>){ 
            result += "[ \n";
            for(size_t j =0; j< vec.size(); j++){ 
                result += "      [";
                for(size_t i =0; i< vec[j].size(); i++){
                    result +=  to_string(vec[j][i]); // to string con int no me genera el problema de antes
                    if( i != vec.size()-1){ 
                    result +=","; 
                    }
                }
                result +="]";
                if( j != vec.size()-1){ 
                    result +=",\n"; } 
            }
            result += "\n      ]";
        }
        return result; 
    }  
};

