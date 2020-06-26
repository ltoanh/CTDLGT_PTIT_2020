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

int n, m;
bool vis[1007];
int color[1007];
vi a[1007];

void DFS(int u){
	vis[u]=1;
	for(int i=0; i<a[u].size(); ++i){
		int v=a[u][i];
		if(!vis[v]){
			if(color[v]==0) color[v] = 3 - color[u];
			DFS(v);
		}
	}
}

bool solve(){
	for(int i=1; i<=n; ++i){
		for(int j=0; j<a[i].size(); ++j){
			if( color[i] == color[a[i][j]] ) return 0;
		}
	}
	return 1;
}
 
main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1; i<=n; ++i){
			a[i].clear();
			color[i]=vis[i]=0;
		}	
		int u, v;	
		for(int i=1; i<=m; ++i){
			cin>>u>>v;
			a[u].pb(v); a[v].pb(u);
		}
		for(int i=1; i<=n; ++i){
			if(color[i]==0){
				color[i]=1;
				DFS(i);
			}
		}
		cout<<(solve()?"YES":"NO")<<endl;
	}
}

