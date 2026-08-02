#include <iostream>
#include <random>
#include "random.h"

namespace Random {
    std::random_device rd;
    std::mt19937 mt{rd()};
}

int output(){
    int input;
    std::cout<<"Please input a number(1~10): ";
    std::cin>>input;
    return input;
} 
void guess(){
    std::uniform_int_distribution dist{1,10};
    int answer=dist(Random::mt);
    int count=1;
    while(true){
        int input=output();
        if(answer!=input){
            std::cout<<"Wrong answer"<<std::endl;
            count++;
            continue;
        }

        std::cout<<"You guessed it in "<<count<<" attempts"<<std::endl;
        break;
    }
}
