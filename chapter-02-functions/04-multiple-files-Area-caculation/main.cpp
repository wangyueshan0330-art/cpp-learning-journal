#include <iostream>
#include "geometry.h"
using namespace std;
int main(){
    double length, width,radius;
    int a;
    cout<<"What do you need:"<<endl;
    cout<<"1.caculating rectangle area"<<endl;
    cout<<"2.caculating circle area"<<endl;
    cin>>a;
    if(a==1){
        cout<<"input length: ";
        cin>>length;
        cout<<"input width: ";
        cin>>width;
        cout<<"The result is: "<<rectangleArea(length,width);
    }else if(a==2){
        cout<<"input radius ";
        cin>>radius;
        cout<<"the result is: "<<circleArea(radius);
    }else{
        cout<<"Error input"<<endl;
    }
    return 0;
}