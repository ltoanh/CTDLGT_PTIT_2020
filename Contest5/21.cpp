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
const int mod=1e9+7;
using namespace std;

int t, n, k;
ll a[1007], f[1007];

main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1; i<=n; ++i) cin>>a[i];
		memset(f, 0, sizeof(f));
		f[0]=1;
		for(int i=1; i<=k; ++i){
			for(int j=1; j<=n; ++j){
				if(a[j]<=i) f[i] = (f[i] + f[i-a[j]])%mod;
			}
		}
		cout<<f[k]<<endl;
	}
}

