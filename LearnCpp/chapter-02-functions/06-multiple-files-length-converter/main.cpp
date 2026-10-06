#include <iostream>
#include "length.h"
int main(){
    int result;
    std::cout<<"1. convert centermeters to meters"<<std::endl;
    std::cout<<"2. convert meters to centermeters"<<std::endl;
    std::cout<<"What do need: ";
    std::cin>>result;
    if(result==1){
        double cm;
        std::cout<<"Pease input a centermeter value: ";
        std::cin>>cm;
        std::cout<<"The result is "<<length::cm_to_m(cm)<<std::endl;
    }else if(result==2){
        double m;
        std::cout<<"Please input a meter value: ";
        std::cin>>m;
        std::cout<<"The result is "<<length::m_to_cm(m)<<std::endl;
    }else std::cout<<"Error input"<<std::endl;
    return 0; 
}