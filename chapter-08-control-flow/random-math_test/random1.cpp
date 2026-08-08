#include <iostream>
#include <random>
#include"random1.h"
namespace random{
    std::random_device rd;
    std::mt19937 mt{rd()};
}
int number1(){
    std::uniform_int_distribution<int>dist(1,20);
    int result=dist(random::mt);
    return result;
}
int number2(){
    std::uniform_int_distribution<int>dist(1,20);
    int result=dist(random::mt);
    return result;
}
int operation(){
    std::uniform_int_distribution<int>dist(1,3);
    int result=dist(random::mt);
    return result;
}
void output(){
    double correct=0,incorrect=0;
    for(int i=1;i<=10;i++){
    int input,op=operation(),numberi=number1(),numberii=number2();
    if(op==1){
        std::cout<<numberi<<'+'<<numberii<<" = ";
        std::cin>>input;
        if(input==numberi+numberii){
            std::cout<<"Correct!"<<std::endl;
            correct++;
        }else{
            std::cout<<"Incorrect, the answer is "<<numberi+numberii<<std::endl;
            incorrect++;
            continue;
        }
    }else if(op==2){
        std::cout<<numberi<<'-'<<numberii<<" = ";
        std::cin>>input;
        if(input==numberi-numberii){
            std::cout<<"Correct!"<<std::endl;
            correct++;
        }else{
            std::cout<<"Incorrect, the answer is "<<numberi-numberii<<std::endl;
            incorrect++;
            continue;
        }
    }else if(op==3){
        std::cout<<numberi<<'*'<<numberii<<" = ";
        std::cin>>input;
        if(input==numberi*numberii){
            std::cout<<"Correct!"<<std::endl;
            correct++;
        }else{
            std::cout<<"Incorrect, the answer is "<<numberi*numberii<<std::endl;
            incorrect++;
            continue;
        }
    }
    }
    double percentage=correct*10.0;
    std::cout<<"You answer "<<correct<<" questions correct"<<std::endl;
    std::cout<<"You answer "<<incorrect<<" questions incorrect"<<std::endl;
    std::cout<<"You get "<<percentage<<" % correct"<<std::endl;
}