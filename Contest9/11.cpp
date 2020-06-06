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

void findWayDfs(bool vis[], int e[]){
	if(!vis[v]){
		cout<<-1<<endl;
		return;
	}
	int tmp = u;
	while(tmp!=v){
		cout<<tmp<<" ";
		tmp=e[tmp];
	}
	cout<<v<<endl;
}

void dfs(vi a[]){
	stack<int> s;
	int path[n+7];
	bool vis[n+7]={0};
	s.push(u); vis[u]=1;
	while(!s.empty()){
		int ans=s.top(); s.pop();
		if(ans==v) break;
		for(int i=0; i<a[ans].size(); ++i){
			int t1=a[ans][i];
			if(!vis[t1]){
				path[ans]=t1;
				vis[t1]=1;
				s.push(ans); s.push(t1);
				break;
			}
		}
	}
	findWayDfs(vis, path);
}

main(){
	cin>>t;
	while(t--){
		cin>>n>>m>>u>>v;
		vi a[n+7];
		int x, y;
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x].pb(y);
		}
		if(u==v) cout<<-1<<endl;
		else dfs(a);
	}	
}

