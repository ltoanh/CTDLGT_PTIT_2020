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
int vis[1007], check;

void bfs(int u){
	queue<int> q;
	q.push(u);
	vis[u]=1;
	while(!q.empty()){
		if(check) return;
		int v=q.front(); q.pop();
		for(int i=0; i<a[v].size(); ++i){
			int ans=a[v][i];
			if(vis[ans]==0){
				q.push(ans);
				vis[ans]=1;
			}
			else if(vis[ans]==1) check=1;
		}
		vis[v]=2;
	}
}

bool isCycle(){
	check=0;
	for(int i=1; i<=n; ++i){
		memset(vis, 0, sizeof(vis));
		bfs(i);
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
			a[y].pb(x);
		}
		cout<<(isCycle()?"YES":"NO")<<endl;
	}
}

