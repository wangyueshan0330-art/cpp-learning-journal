#include <iostream>
#include "training.h"
int main(){
        int input=0;
        while(true){    
        trainer::output();
        std::cout<<"Please input: ";
        std::cin>>input;
        if(input==1){
            int num;
            std::cout<<"Please input number: ";
            std::cin>>num;
            if(trainer::even_or_odd(num)==true){
                std::cout<<"Even number"<<std::endl;
            }else {
                std::cout<<"Odd number"<<std::endl;
                continue;
            }
        }else if(input==2){
            double base,exponent;
            std::cout<<"Please input base and exponent: ";
            std::cin>>base>>exponent;
            std::cout<<"The result is "<<trainer::power_caculation(base,exponent);
            continue;
        }else if(input==3){
            int num;
            std::cout<<"Please input number: ";
            std::cin>>num;
            std::cout<<"The result is "<<trainer::number_addition(num)<<std::endl;
            continue;
        }else if(input==4){
            int num;
            std::cout<<"Please input number: ";
            std::cin>>num;
            trainer::printMultiplicationTable(num);
            continue;
        }else if(input==5){
            std::cout<<"Goodbye!"<<std::endl;
            break;
        }else{
                continue;
            }
        }    
        
    return 0;
}