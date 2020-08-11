#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

ll n, k;

ll countDigit(ll m, ll sum){
	if(m==0) return sum==0;
	if(sum==0) return 1;
	ll res = 0;
	for(int i=0; i<=9; ++i){
		if(sum-i>=0) res = (res + countDigit(m-1, sum-i))%mod;
	}
	return res;
}
ll solve(){
	ll res = 0;
	//count numbers begining from 1->9
	for(int i=1; i<=9; ++i){
		if(k-i>=0) res = (res + countDigit(n-1, k-i))%mod;
	}
	return res;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<solve()<<endl;
	}
}

