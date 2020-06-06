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

int t, n, m, u, d;

void findWayBfs(bool vis[], int path[]){
	if(!vis[d]){
		cout<<-1<<endl;
		return;
	}
	vi res;
	int tmp = d;
	while(tmp!=u){
		res.pb(tmp);
		tmp=path[tmp];
	}
	res.pb(u);
	for(int i=res.size()-1; i>=0; --i) cout<<res[i]<<" ";
	cout<<endl;
}

void bfs(int u, vi a[]){
	bool vis[n+7]={0};
	queue<int> q;
	q.push(u);
	vis[u]=1;
	int path[n+7]={0};
	while(!q.empty()){
		int ans=q.front(); q.pop();
		if(ans==d) break;
		for(int i=0; i<a[ans].size(); ++i){
			int v=a[ans][i];
			if(!vis[v]){
				path[v]=ans;
				vis[v]=1;
				q.push(v);
			}
		}
	}
	findWayBfs(vis, path);
}

main(){
	cin>>t;
	while(t--){
		cin>>n>>m>>u>>d;
		vi a[n+7];
		int x, y;
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x].pb(y);
			a[y].pb(x);
		}
		bfs(u, a);
	}	
}

