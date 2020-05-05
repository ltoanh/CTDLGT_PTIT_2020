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
	int c, n;
	int a[107];
	cin>>c>>n;
	for(int i=1; i<=n; ++i) cin>>a[i];
	vector< vi > f(n+7, vi (c+7,0));
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=c; ++j){
			if(j-a[i]>=0) f[i][j] = max(f[i-1][j], f[i-1][j-a[i]]+a[i]);
			else f[i][j] = f[i-1][j];
		}
	}
	cout<<f[n][c];
}

