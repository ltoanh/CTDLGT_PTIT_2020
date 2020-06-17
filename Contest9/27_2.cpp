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

int t, n, m;
vi a[1007];
bool vis[1007], check;
int curr=0;
void dfs(int u){
	vis[u]=1;
	for(int i=0; i<a[u].size(); ++i){
		int v=a[u][i];
		if(!vis[v]) dfs(v);
		else if(v==curr) check=1;
	}
}
bool isCycle(){
	check=0;
	for(int i=1; i<=n; ++i){
		memset(vis, 0, sizeof(vis));
		curr=i;
		dfs(i);
		if(check) return 1;
	}
	return 0;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1; i<=n; ++i){
			vis[i]=0;
			a[i].clear();
		}
		int x, y;
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x].pb(y);
		}
		cout<<(isCycle()?"YES":"NO")<<endl;
	}
}

