#include<bits/stdc++.h>
using namespace std;
int main(){
    int numbers{0},ammt{0};
    cin>>ammt;
    while(ammt>0){
        if(ammt>=100){
            ammt-=100;
            numbers+=1;
        }else if(ammt>=20){
            ammt-=20;
            numbers+=1;
        }else if(ammt>=5){
            ammt-=5;
            numbers+=1;
        }else{
            ammt-=1;
            numbers+=1;
        }
    }
    cout<<numbers;
    return 0;
}