#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int mod=1e9+7;

using namespace std;

int t, n;
map<ll, ll> F;

ll fibo(int n){
	if(n<2) return 1;
	if(F.find(n)!=F.end()) return F[n];
	F[n]=(fibo((n+1)/2)*fibo(n/2)+fibo((n-1)/2)*fibo((n-2)/2))%mod;
	return F[n];
}

main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<fibo(n-1)<<endl;
	}
}

