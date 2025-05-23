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
                string strDouble= to_string(vec[i]); // si sumo el string derecho me lo pone con 6 decimales
                size_t pointIndex = strDouble.find('.');
                result += strDouble.substr(0, pointIndex + 2);

                if( i != vec.size()-1){ 
                    result +=","; 
                }
            }
            result+="],";
             
        }
        if constexpr(is_same_v<T, string>){ 
            result += "[";
            for(size_t i=0; i<vec.size(); i++){ 
                result += "\"" + vec[i] + "\"";
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
                    result +=  to_string(vec[j][i]); 
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

