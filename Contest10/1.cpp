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
int color[1007];

bool coloringGraph(int b){
	queue<int> q;
	q.push(b); color[b]=1;
	int ans=0;
	while(!q.empty()){
		int u=q.front(); q.pop();
		for(int i=0; i<a[u].size(); ++i){
			int v=a[u][i];
			if(color[v] && color[v]!=color[u]) continue;
			if(!color[v]){
				if(color[u]==1) color[v]=2;
				else color[v]=color[u]-1;
				q.push(v);
			}
			else if(color[v]==color[u]){
				color[v]=color[u]+1;
			}
			ans=max(ans, color[v]);
		}
	}
	return ans <= k;
}
main(){
	cin>>t;
	while(t--){
		int x, y, b=0;
		cin>>n>>m>>k;
		for(int i=1; i<=n; ++i) a[i].clear();
		memset(color, 0, sizeof(color));
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x].pb(y); a[y].pb(x);
			b = x;
		}
		cout<<(coloringGraph(b)?"YES":"NO")<<endl;
	}
}

