#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e+5;

using namespace std;

int t, n;

main(){
	cin>>t;
	while(t--){
		cin>>n;
		vector<ll> a, b;
		int vt=0;
		for(int i=0; i<n; ++i){
			ll x; cin>>x;
			a.pb(x);
		}
		for(int i=0; i<n-1; ++i){
			ll x; cin>>x;
			b.pb(x);
		}
		for(int i=0; i<n-1; ++i){
			if(a[i]!=b[i]){
				vt=i+1;
				break;
			}
		}
		cout<<vt<<endl;
	}
}

