#include <iostream>
#include "temp.h"
int main(){
    int choice;
    std::cout<<"1.celsius to fahrenheit"<<std::endl;
    std::cout<<"2.fahrenheit to celsius"<<std::endl;
    std::cout<<"choose: ";
    std::cin>>choice;
    double input;
    if(choice==1){
        std::cout<<"please give celsius: ";
        std::cin>>input;
        std::cout<<input<<" celsius equals to "<<temperature::celsiusToFahrenheit(input)<<" fahrenheit"<<'\n';
    }else if(choice==2){
        std::cout<<"please give a fahrenheit: ";
        std::cin>>input;
        std::cout<<input<<" fahrenheit equals to "<<temperature::fahrenheitToCelsius(input)<<" celsius"<<'\n';
    }else{
        std::cout<<"Error input"<<std::endl;
    }
    return 0;
}