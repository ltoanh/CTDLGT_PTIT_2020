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

int t, n, m, u, v;

void bfs(int u, vi a[], bool vis[]){
	queue<int> q;
	q.push(u);
	vis[u]=1;
	while(!q.empty()){
		int ans=q.front(); q.pop();
		for(int i=0; i<a[ans].size(); ++i){
			int v=a[ans][i];
			if(!vis[v]){
				vis[v]=1;
				q.push(v);
			}
		}
	}
}
int connectedComponent(bool vis[], vi a[]){
	int res=0;
	for(int i=1; i<=n; ++i){
		if(!vis[i]){
			bfs(i, a, vis);
			res++;
		}
	}
	return res;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		vi a[n+7];
		bool vis[n+7]={0};
		int x, y;
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x].pb(y);
			a[y].pb(x);
		}
		cout<<connectedComponent(vis, a)<<endl;
	}	
}

