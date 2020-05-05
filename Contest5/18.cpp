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

bool cmp(ii x, ii y){
	if(x.S!=y.S) return x.S<y.S;
	return x.F<y.F;
}
main(){
	int t; cin>>t;
	while(t--){
		int n;
		vii a;
		cin>>n;
		for(int i=1; i<=n; ++i){
			int x, y; cin>>x>>y;
			a.pb({x,y});
		}
		sort(a.begin(), a.end(), cmp);
		int f[1007];
		for(int i=0; i<n; ++i) f[i]=1;
		for(int i=1; i<n; ++i){
			for(int j=i-1; j>=0; --j){
				if(a[i].F>a[j].S) f[i] = max(f[i], f[j]+1);
			}
		}
		sort(f, f+n);
		cout<<f[n-1]<<endl;
	}
}

