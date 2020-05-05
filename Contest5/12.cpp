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
int t;
int n, k;

main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		if(k>n) cout<<0;
		else{
			ll res=1;
			for(int i=n-k+1; i<=n; ++i){
				res = (res%mod * i%mod)%mod;
			}
			cout<<res;
		}
        cout<<endl;
	}
}

