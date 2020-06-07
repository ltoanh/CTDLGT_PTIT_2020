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

int Euler(vi deg[]){
	int odd=0, even=0;
	for(int i=1; i<=n; ++i){
		deg[i].size()&1?odd++:even++;
	}
	if(odd<=2 && odd>0) return 1;;
	if(even==n) return 2;
	return 0;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		vi deg[n+7];
		int x, y;
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			deg[x].pb(y);
			deg[y].pb(x);
		}
		cout<<Euler(deg)<<endl;
	}	
}

