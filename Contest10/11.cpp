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


int n, m, tmp;
bool vis[1007];
vii a[107];

void Prim(){
	int res=0;
	priority_queue< ii, vii, greater<ii> > q;
	q.push({0,tmp});
	while(!q.empty()){
		ii u=q.top(); q.pop();
		int wi=u.F, v=u.S;
		if(!vis[v]){
			res+=wi;
			vis[v]=1;
			for(int i=0; i<a[v].size(); ++i){
				ii x=a[v][i];
				if(!vis[x.S]){
					q.push({x.F,x.S});
				}
			}
		}
	} 	
	cout<<res<<endl;
}

main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		int u, v, w;
		memset(vis, 0, sizeof(vis));
		for(int i=1; i<=n; ++i) a[i].clear();
		for(int i=1; i<=m; ++i){
			cin>>u>>v>>w;
			a[u].pb({w,v}); a[v].pb({w,u});
			tmp=u;
		}
		Prim();
	}
}

