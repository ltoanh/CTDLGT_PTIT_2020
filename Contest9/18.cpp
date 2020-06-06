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

bool isVisitedAll(bool vis[]){
	for(int i=1; i<=n; ++i) if(!vis[i]) return 0;
	return 1;
}


bool bfs(int u, vi a[]){
	queue<int> q;
	bool vis[n+7]={0};
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
	return isVisitedAll(vis);
}
bool stronglyConnectedComponent(vi a[]){
	for(int i=1; i<=n; ++i){
		if(!bfs(i, a)) return 0;
	}
	return 1;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		vi a[n+7];
		int x, y;
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x].pb(y);
		}
		cout<<(stronglyConnectedComponent(a)?"YES":"NO")<<endl;
	}	
}

