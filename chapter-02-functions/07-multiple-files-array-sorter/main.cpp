#include <iostream>
#include "sort.h"
int main(){
    int n,a[999];
    std::cout<<"How many numbers are there in your array: ";
    std::cin>>n;
    std::cout<<"Please input one by one: ";
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    sorting::execute(a,n);
}