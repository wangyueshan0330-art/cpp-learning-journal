#include <iostream>
using namespace std;
int maxofthree(int a, int b, int c){
    int num;
    num=max(a,max(b,c));
    return num;
}
main(){
    int a,b,c;
    cout<<"Please enter three numbers: ";
    cin>>a>>b>>c;
    int result =maxofthree(a,b,c);
    cout<<"The result is: "<<result<<endl;
    return 0;
}