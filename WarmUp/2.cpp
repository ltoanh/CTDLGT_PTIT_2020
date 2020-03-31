#include<iostream>

using namespace std;

int t, n, k, a[1007];

void Print(){
    for(int i=1; i<=k; ++i) cout<<a[i]<<" ";
    cout<<endl;
}
void Solve(){
    int i=k;
    while(i>0 && a[i]>=n-k+i){
        i--;
    }
    if(i==0){
        for(int i=1; i<=k; ++i) cout<<i<<" ";
        return;
    }
    int ans=++a[i++];
    for(int j=i; j<=k; ++j){
        a[j]=++ans;
    }
    Print();
}
main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1; i<=k; ++i) cin>>a[i];
        Solve();
    }
}
