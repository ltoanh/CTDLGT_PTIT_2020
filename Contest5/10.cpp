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

int t, n, m;
int a[1007][1007], f[1007][1007];

main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=m; ++j){
				cin>>a[i][j];
			}
		}
		memset(f, 0, sizeof(f));
		for(int i=1; i<=n; ++i) f[i][1] = f[i-1][1] + a[i][1];
		for(int j=1; j<=m; ++j) f[1][j] = f[1][j-1] + a[1][j];
		int Fopt = 0;
		for(int i=2; i<=n; ++i){
			for(int j=2; j<=m; ++j){
				f[i][j] = min(f[i-1][j-1], min(f[i-1][j], f[i][j-1])) + a[i][j];
			}
		}
		cout<<f[n][m]<<endl;
	}
}

