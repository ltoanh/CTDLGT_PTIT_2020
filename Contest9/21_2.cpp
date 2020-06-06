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
int a[1007][1007];
bool vis[1007];

bool isVisitedAll(){
	for(int i=1; i<=n; ++i) if(!vis[i]) return 0;
	return 1;
}
void dfs(int u){
	stack<int> s;
	s.push(u); vis[u]=1;
	while(!s.empty()){
		int i=s.top(); s.pop();
		for(int j=1; j<=n; ++j){
			if(a[i][j] && !vis[j]){
				vis[j]=1;
				s.push(i);
				s.push(j);
				break;
			}
		}
	}
}

void countEdge(){
	for(int i=1; i<=n; ++i){
		for(int j=i+1; j<=n; ++j){
			if(a[i][j]){
				for(int i=1; i<=n; ++i) vis[i]=0;
				a[i][j]=a[j][i]=0;
				dfs(1);
				if(!isVisitedAll()) cout<<i<<" "<<j<<" ";
				a[i][j]=a[j][i]=1;
			}
		}
	}
}
main(){
	cin>>t;
	while(t--){
		memset(a, 0, sizeof(a));
		memset(vis, false, sizeof(vis));
		cin>>n>>m;
		int x, y;
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;
		}
		countEdge();
	}	
}

