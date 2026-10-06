#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>d(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    sort(d.begin(),d.end());
    int num{1},last=d[0];
    for(int i=1;i<n;i++){
        if(d[i]-last>=k){
            num++;
            last=d[i];
        }
    }
    cout<<num;
    return 0;
}