#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, n, x;

main(){
	cin>>t;
	while(t--){
		cin>>n;
		ll M = 0;
		ll a = (ll)n*(n+1)/2;
		for(int i = 1 ; i < n; ++i){
			cin>>x;
			a -= x;
		}
		cout<<a<<endl;
	}
}

