#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,remaining=0,skill=1,money=0;
    cin>>n;
    vector<char>day(n);
    for(int i=0;i<n;i++){
        cin>>day[i];
    }
    for(int i=0;i<n;i++){
        if(day[i]=='M'){
            money+=skill;
        }else if(day[i]=='C'){
                if(skill>n-i-1){
                    money+=skill;
                }else{
                    skill++;
                }
        }
    }
    cout<<money;
    return 0;
}