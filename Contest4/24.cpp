#include<iostream>
#define mod 123456789
#define ll long long
using namespace std;
int t;
ll k;

ll Try(int n, ll k){
    if(k==0) return 1;
    if(k==1) return n%mod;
    ll temp=Try(n,k/2);
    if(!(k&1)) return temp*temp%mod;
    return n*(temp*temp%mod)%mod;
}
main(){
    cin>>t;
    while(t--){
        cin>>k;
        cout<<Try(2,k-1)<<endl;
    }
}
