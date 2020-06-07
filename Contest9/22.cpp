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

bool isVisitedAll(bool vis[]){
	for(int i=1; i<=n; ++i) if(!vis[i]) return 0;
	return 1;
}


void bfs(int u, vi a[], bool vis[], ii pos){
	queue<int> q;
	q.push(u);
	vis[u]=1;
	while(!q.empty()){
		int ans=q.front(); q.pop();
		for(int i=0; i<a[ans].size(); ++i){
			int v=a[ans][i];
			ii c1, c2; c1.F=c2.S=ans, c1.S=c2.F=v;
			if(!vis[v] && c1!=pos && c2!=pos){
				vis[v]=1;
				q.push(v);
			}
		}
	}
}

void countEdge(bool vis[], vi a[]){
	for(int i=1; i<=n; ++i){
		for(int j=0; j<a[i].size(); ++j){
			if(i<a[i][j]){
				for(int i=1; i<=n; ++i) vis[i]=0;
		 		ii pos; pos.F=i, pos.S=a[i][j];
				bfs(1, a, vis, pos);
				if(!isVisitedAll(vis)){
					cout<<i<<" "<<a[i][j]<<" ";
				}
			}
		}
	}
	cout<<endl;
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
		countEdge(vis, a);
	}	
}

