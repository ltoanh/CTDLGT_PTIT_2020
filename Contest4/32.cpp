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

vector<ll> a;
main(){
	int t; cin>>t;
	while(t--){
		a.clear();
		int n; cin>>n;
		bool isDecrea = 1;
		for(int i = 0; i < n; ++i){
			ll x; cin>>x; a.pb(x);
			if(i>=1 && a[i-1] <= x) isDecrea  = 0;
		}
		if(isDecrea) cout<<1LL*n*(n-1)/2<<endl;
		else{
			ll res = 0;
			for(int i = 0; i < n; ++i){
				for(int j = i + 1; j < n; ++j){
					if(a[i] > a[j]) res++;
				}
			}
			cout<<res<<endl;
		}
	}
}

