#include<iostream>

using namespace std;

int t, n, k;
int a[20]={0};

void Print(){
    for(int i=1; i<=k; ++i) cout<<a[i];
    cout<<" ";
}

void Try(int i){
    if(i>k){
        Print();
        return;
    }
    for(int j=a[i-1]+1; j<=n-k+i; ++j){
        a[i]=j;
        Try(i+1);
    }
}
main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        Try(1);
        cout<<endl;
    }
}
