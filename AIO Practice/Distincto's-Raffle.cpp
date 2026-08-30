#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0,k=0;
    bool success=false;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>count(k+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        count[a[i]]++;
    }
    for(int i=0;i<k;i++){
        if(count[i]==1){
            cout<<i;
            success=true;
            break;
        }
    }
    if(success=false){
        cout<<-1;
    }
    return 0;
}