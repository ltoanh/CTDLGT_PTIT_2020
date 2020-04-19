#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;
int t, n, k;

ll Try(int n, int k){
    if(k==0) return 1;
    if(k==1) return n%mod;
    ll temp=Try(n,k/2);
    if(!(k&1)) return (temp*temp)%mod;
    return  ((temp*temp)%mod)*n%mod;
}
main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<Try(n,k)<<endl;
    }
}
