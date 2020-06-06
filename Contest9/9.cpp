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

void bfs(int u, vi a[]){
	bool vis[n+7]={0};
	queue<int> q;
	q.push(u);
	vis[u]=1;
	while(!q.empty()){
		int s=q.front(); q.pop();
		cout<<s<<" ";
		for(int i=0; i<a[s].size(); ++i){
			int v=a[s][i];
			if(!vis[v]){
				q.push(v);
				vis[v]=1;
			}
		}
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m>>u;
		vi a[n+7];
		int x, y;
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x].pb(y);
		}
		bfs(u, a);
		cout<<endl;
	}	
}

