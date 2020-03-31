#include<iostream>
#include<string>

using namespace std;

int t, n, a[17]={0};

void Print(){
    for(int i=0; i<n; ++i){
        if(a[i]==0) cout<<'A';
        else cout<<'B';
    }
    cout<<" ";
}
void Solve(int i){
    if(i>=n){
        Print();
        return;
    }
    for(int j=0; j<=1; ++j){
        a[i]=j;
        Solve(i+1);
    }
}
main(){
    cin>>t;
    while(t--){
        cin>>n;
        Solve(0);
        cout<<endl;
    }
}

