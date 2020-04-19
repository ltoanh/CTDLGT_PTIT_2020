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

int t;
int n, k;
int findPosition(vector<ll> a){
	if(a[0]>k) return -1;
	if(a[n-1]<=k) return n;
	for(int i=0; i<n; ++i){
		if(a[i]>k) return i;
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<ll> a;
		for(int i=0; i<n; ++i){
			ll x; cin>>x;
			a.pb(x);
		}
		cout<<findPosition(a)<<endl;
	}
}

