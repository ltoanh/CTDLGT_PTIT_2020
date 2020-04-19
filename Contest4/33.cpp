#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;
int t;
ll n, k;

ll findReverse(){
	ll ans=0, m=n;
	while(m){
		ans=ans*10+m%10;
		m/=10;
	}	
	return ans;
}
ll Try(ll n, ll k){
    if(k==0) return 1;
    ll temp=Try(n,k/2);
    if(k&1) return (((temp%mod*temp%mod)%mod)*(n%mod))%mod;
    return (temp%mod*temp%mod)%mod;
}
main(){
    cin>>t;
    while(t--){
        cin>>n;
        k=findReverse();
        cout<<Try(n,k)<<endl;
    }
}
