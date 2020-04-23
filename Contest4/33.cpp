#include<iostream>
#define mod 1000000007
#define ll long long
using namespace std;
int t;
ll n, k;

ll findReverse(){
	ll ans=0, m=n;
	while(m>0){
		ans=ans*10+m%10;
		m/=10;
	}	
	return ans;
}
ll Try(ll n, ll k){
    if(k==0) return 1;
	ll temp=Try(n,k/2);
    if(k&1) return n*(temp*temp%mod)%mod;
    return temp*temp%mod;
}
main(){
    cin>>t;
    while(t--){
        cin>>n;
        k=findReverse();
        cout<<Try(n,k)<<endl;
    }
}
