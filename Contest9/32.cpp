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

int dX[]={-1,0,1,-1,1,-1,0,1};
int dY[]={-1,-1,-1,0,0,1,1,1};

int t, n, m;
int a[507][507];
bool vis[507][507];

void findIsland(int u, int v){
	queue<ii> q;
	q.push({u,v});
	vis[u][v]=1;
	while(!q.empty()){
		ii ans=q.front(); q.pop();
		for(int i=0; i<8; ++i){
			int x=ans.F+dX[i];
			int y=ans.S+dY[i];
			if(!vis[x][y] && a[x][y]){
				vis[x][y]=1;
				q.push({x,y});
			}
		}
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		memset(vis, 0, sizeof(vis));
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=m; ++j) cin>>a[i][j];
		}
		int Fopt=0;
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=m; ++j){
				if(a[i][j] && !vis[i][j]){
					findIsland(i,j);
					Fopt++;
				}
			}
		}
		cout<<Fopt<<endl;
	}
}

