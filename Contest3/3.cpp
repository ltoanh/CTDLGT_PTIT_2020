#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define int ll
const int MAX=1e+5;

using namespace std;

int t, n;

main(){
	cin>>t;
	while(t--){
		vi a;
		cin>>n;
		for(int i=0; i<n; ++i){
			int x; cin>>x;
			a.pb(x);
		}
		sort(a.begin(), a.end());
		int res=0;
		for(int i=0; i<a.size(); ++i){
			res=(res%mod+((i%mod)*(a[i]%mod))%mod)%mod;
		}
		cout<<res%mod<<endl;
	}
}

