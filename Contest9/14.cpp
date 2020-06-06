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

void dfs(int u, vi a[],bool vis[], int e[], int TPLT){
	stack<int> s;
	s.push(u); vis[u]=1; e[u]=TPLT;
	while(!s.empty()){
		int ans=s.top(); s.pop();
		for(int i=0; i<a[ans].size(); ++i){
			int t1=a[ans][i];
			if(!vis[t1]){
				e[t1]=TPLT;
				vis[t1]=1;
				s.push(ans); s.push(t1);
				break;
			}
		}
	}
}

void connectedComponent(bool vis[], vi a[], int e[]){
	int TPLT=1;
	for(int i=1; i<=n; ++i){
		if(!vis[i]){
			dfs(i, a, vis, e, TPLT);
			TPLT++;
		}
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		int e[n+7]={0};
		vi a[n+7];
		bool vis[n+7]={0};
		int x, y;
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x].pb(y);
			a[y].pb(x);
		}
		connectedComponent(vis, a, e);
		int q; cin>>q;
		while(q--){
			int u, v;
			cin>>u>>v;
			if(e[u]==e[v]) cout<<"YES";
			else cout<<"NO";
			cout<<endl;
		}
	}	
}

