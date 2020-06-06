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

int t, n, m, u;

void dfs(int u, vi a[],bool vis[]){
	cout<<u<<" ";
	vis[u]=1;
	for(int i=0; i<a[u].size(); ++i){
		int v=a[u][i];
		if(!vis[v]){
			dfs(v, a, vis);
		}
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m>>u;
		vi a[n+7];
		bool vis[n+7]={0};
		int x, y;
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x].pb(y);
			a[y].pb(x);
		}
		dfs(u, a, vis);
		cout<<endl;
	}	
}

