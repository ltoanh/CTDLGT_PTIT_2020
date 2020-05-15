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

int t, n;

main(){
	cin>>t;
	while(t--){
		vii a;
		cin>>n;
		for(int i = 1; i <= n; ++i){
			int x; cin>>x;
			a.pb({x, i});
		}
		sort(a.begin(), a.end());
		int L = 0, R = n - 1;
		for(int i = 0; i < n; ++i){
			if(a[i].second != i+1){
				L = i + 1;
				break;
			}
		}
		for(int i = n-1; i > 0; --i){
			if(a[i].second != i+1){
				R = i + 1;
				break;
			}
		}
		cout<<L<<" "<<R<<endl;
	}
}

