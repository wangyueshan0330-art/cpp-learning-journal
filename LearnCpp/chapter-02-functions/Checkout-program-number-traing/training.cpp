#include <iostream>
#include "training.h"
namespace trainer{
    void output(){
        std::cout<<std::endl;
        std::cout<<std::endl;
        std::cout<<"===== Number Training Program ====="<<std::endl;
        std::cout<<"1.check even or odd"<<std::endl;
        std::cout<<"2.caculate a power"<<std::endl;
        std::cout<<"3.sum numbers from 1 to N"<<std::endl;
        std::cout<<"4.multiplication table"<<std::endl;
        std::cout<<"5.Exit"<<std::endl;
    }
    bool even_or_odd(int num){
        if(num%2==0){
            return true;
        }else return false;
    }
    double power_caculation(double base,double exponent){
        double result=1;
        for(int i=0;i<exponent;i++){
            result=result*base;
        }
        return result;
    }
    int number_addition(int num){
        int count=0;
        for(int i=1;i<=num;i++){
            count+=i;
        }
        return count;
    }
    void printMultiplicationTable(int num){
        for(int i=1;i<=12;i++){
            std::cout<<num<<"*"<<i<<"="<<num*i<<std::endl;
        }
    }
}