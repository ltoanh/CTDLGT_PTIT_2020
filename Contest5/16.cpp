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

main(){
	int t; cin>>t;
	while(t--){
		int n, a[1007];
		cin>>n;
		for(int i=1; i<=n; ++i) cin>>a[i];
		int f[1007];
		for(int i=1; i<=n; ++i) f[i]=a[i];
		for(int i=2; i<=n; ++i){
			for(int j=i-1; j>0; --j){
				if(a[i]>a[j]) f[i] = max(f[i], f[j]+a[i]);
			}
		}
		sort(f+1, f+n+1);
		cout<<f[n]<<endl;
	}
}

