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

void dfs(int u, vi a[],bool vis[]){
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
		}
	}
}

int connectedComponent(bool vis[], vi a[]){
	int res=0;
	for(int i=1; i<=n; ++i){
		if(!vis[i]){
			dfs(i, a, vis);
			res++;
		}
	}
	return res==1;
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		vi a[n+7];
		bool vis[n+7]={0};
		int x, y;
		for(int i=1; i<=n-1; ++i){
			cin>>x>>y;
			a[x].pb(y);
			a[y].pb(x);
		}
		cout<<(connectedComponent(vis, a)?"YES":"NO")<<endl;
	}	
}

