#include <iostream>
using namespace std;
int cylinderVolume(double radius, double height){
    int volume;
    volume=radius*radius*3.14*height;
    return volume;
}
int main(){
    int radius,height;
    cout<<"radius:"<<' ';
    cin>>radius;
    cout<<"height:"<<' ';
    cin>>height;
    cout<<"thr result is approximately "<<cylinderVolume(radius,height)<<endl;
    return 0;
}