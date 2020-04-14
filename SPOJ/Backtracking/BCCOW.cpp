#include<iostream>
#include<climits>
#define ll long long
using namespace std;

ll m, n;
ll W_i[20], a[20];
ll Fopt=INT_MIN;
void Check(){
    ll ans=0;
    for(int i=0; i<=n; ++i){
        ans+=W_i[i]*a[i];
    }
    if(ans<=m) Fopt=max(ans, Fopt);
}
void Try(int i){
    for(int j=0; j<=1; ++j){
        a[i]=j;
        if(i==n) Check();
        else Try(i+1);
    }
}
main(){
    cin>>m>>n;
    for(int i=1; i<=n; ++i) cin>>W_i[i];
    Try(1);
    cout<<Fopt;
}
