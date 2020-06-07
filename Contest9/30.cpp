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

int t, n, m, k;

int Euler(vi degIn[], vi degOut[]){
	for(int i=1; i<=n; ++i){
		if(degIn[i].size()!=degOut[i].size()) return 0;
	}
	return 1;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		vi degIn[n+7], degOut[n+7];
		int x, y;
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			degOut[x].pb(y);
			degIn[y].pb(x);
		}
		cout<<Euler(degIn, degOut)<<endl;
	}	
}

