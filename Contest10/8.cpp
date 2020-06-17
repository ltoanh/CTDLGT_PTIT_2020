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
vi a[1007];
bool vis[1007];
vii res;

void Dfs(int u){
	vis[u]=1;
	for(int i=0; i<a[u].size(); ++i){
		int v=a[u][i];
		if(!vis[v]){
			res.pb({u,v});
			Dfs(v);
		}
	}
}

void T_Dfs(int u){
	memset(vis, 0, sizeof(vis));
	Dfs(u);
	if(res.size()==n-1){
		for(int i=0; i<res.size(); ++i)
			cout<<res[i].F<<" "<<res[i].S<<endl;
		return;
	}
	cout<<-1<<endl;
}

main(){
	cin>>t;
	while(t--){
		int x, y;
		cin>>n>>m>>k;
		res.clear();
		for(int i=1; i<=n; ++i) a[i].clear();
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x].pb(y);
			a[y].pb(x);			
		}
		T_Dfs(k);
	}
}

