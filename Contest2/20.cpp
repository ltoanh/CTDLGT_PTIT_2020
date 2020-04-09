#include<iostream>

using namespace std;

int t, n, len, a[17], d;
int res[17][17];

void Print(int m){
    cout<<"[";
    for(int i=0; i<m; ++i){
        cout<<res[m][i];
        if(i<m-1) cout<<" ";
    }
    cout<<"]";
}
void Result(){
    for(int i=0; i<n; ++i){
        res[d][i]=a[i];
    }
    d--;
}
void Try(){
    if(n<1) return;
    Result();
    n-=1;
    for(int j=0; j<n; ++j){
        a[j]+=a[j+1];
    }
    Try();
}
void Solve(){
    Try();
    for(int i=1; i<=len; ++i){
        Print(i);
    }
    cout<<endl;
}
main(){
    cin>>t;
    while(t--){
        cin>>n;
        d=len=n;
        for(int i=0; i<n; ++i) cin>>a[i];
        Solve();
    }
}
