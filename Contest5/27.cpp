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

int t, n, v;
int a[1007], c[1007];
int f[1007][1007];

main(){
	cin>>t;
	while(t--){
		cin>>n>>v;
		for(int i=1; i<=n; ++i) cin>>a[i];
		for(int i=1; i<=n; ++i) cin>>c[i];
		memset(f, 0, sizeof(f));
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=v; ++j){
				f[i][j] = f[i-1][j];
				if(j>=a[i]) f[i][j] = max(f[i][j], f[i-1][j-a[i]] +c[i]);
			}
		}
		cout<<f[n][v]<<endl;
	}
}

