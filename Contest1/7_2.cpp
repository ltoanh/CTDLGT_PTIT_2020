#include<iostream>

using namespace std;

int t, n, k;
int a[17];
bool Stop;
void Print(){
    cout<<"(";
    for(int i=1; i<k; ++i) cout<<a[i]<<" ";
    cout<<a[k]<<") ";
}

void Try(){
    int i=k;
    while(i>0 && a[i]==1) i--;
    if(i<=0){
        Stop=0;
        return;
    }
    a[i]-=1;
    int ans=k-i+1, S=ans/a[i], R=ans%a[i];
    k=i;
    if(S>0){
        for(int j=i+1; j<=S+i; ++j){
            a[j]=a[i];
        }
        k+=S;
    }
    if(R>0){
        a[++k]=R;
    }
}
void Solve(){
    while(Stop){
        Print();
        Try();
    }
    cout<<endl;
}

main(){
    cin>>t;
    while(t--){
        Stop=1;
        cin>>n;
        k=1; a[k]=n;
        Solve();
    }
}
