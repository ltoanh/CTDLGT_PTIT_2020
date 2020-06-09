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

bool dfs(int u){
	stack<int> s;
	s.push(u); vis[u]=1;
	while(!s.empty()){
		int ans=s.top(); s.pop();
		for(int i=0; i<a[ans].size(); ++i){
			int t1=a[ans][i];
			if(!vis[t1]){
				vis[t1]=1;
				s.push(ans); s.push(t1);
				break;
			}
			else if(t1==u) return 1;
		}
	}
	return 0;
}
bool isCycle(){
	check=0;
	for(int i=1; i<=n; ++i){
		memset(vis, 0, sizeof(vis));
		if(dfs(i)) return 1;
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

