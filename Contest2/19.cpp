#include<iostream>

using namespace std;

int t, n, a[17];

void Print(){
    cout<<"[";
    for(int i=0; i<n; ++i){
        cout<<a[i];
        if(i<n-1) cout<<" ";
    }
    cout<<"]\n";
}
void Try(){
    if(n<1) return;
    Print();
    n-=1;
    for(int j=0; j<n; ++j){
        a[j]+=a[j+1];
    }
    Try();
}
main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; ++i) cin>>a[i];
        Try();
    }
}
