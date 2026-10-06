#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>c(n);
    int left=0,right=n-1;
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    long long total=0;
    int j=1;
    while(j<=k){
        total+=c[left];
        right--;
        left++;
        j++;
    }
    for(int i=left;i<right;i+=2){
        total+=c[i+1];
    }
    cout<<total<<endl;
    return 0;
}