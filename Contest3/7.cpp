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
bool cmp(int x, int y){
	return x>y;
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		vector<ll> a, b;
		for(int i=0; i<n; ++i){
			ll x; cin>>x;
			a.pb(x);
		}
		for(int i=0; i<n; ++i){
			ll x; cin>>x;
			b.pb(x);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), cmp);
		ull res=0;
		for(int i=0; i<n; ++i){
			res+=(ull)a[i]*b[i];
		}
		cout<<res<<endl;
	}
}

