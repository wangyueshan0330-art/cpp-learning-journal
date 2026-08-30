#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>house(n),score(n),market(m),price(m);
    for(int i=0;i<n;i++){
        cin>>house[i];
    }
    for(int i=0;i<m;i++){
        cin>>market[i];
    }
    for(int i=0;i<m;i++){
        cin>>price[i];
    }
    for(int i=0;i<n;i++){
        int cost,best=99999;
        for(int j=0;j<m;j++){
            cost=price[j]+abs(house[i]-market[j]);
            best=min(best,cost);       
        }
        score[i]=best;
    }
    for(int i=0;i<n;i++){
        cout<<score[i]<<' ';
    }
    return 0;
}