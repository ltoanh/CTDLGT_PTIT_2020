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
bool check, vis[1007];

void Hamilton(int u, int count){
	if(count==n){
		check=1;
		return;
	}
	for(int i=0; i<a[u].size(); ++i){
		int j = a[u][i];
		if(!vis[j]){
			vis[j]=1;
			Hamilton(j, count+1);
			vis[j]=0;
		}
	}
}
bool isHamilton(){
	check=0;
	for(int i=1; i<=n; ++i){
		memset(vis, 0, sizeof(vis));
		Hamilton(i, 0);
		if(check==1) return 1;
	}
	return 0;
}
main(){
	cin>>t;
	while(t--){
		int x, y;
		cin>>n>>m;
		for(int i=1; i<=n; ++i) a[i].clear();
		for(int i=1; i<=m; ++i){
			cin>>x>>y;
			a[x].pb(y);
			a[y].pb(x);
		}
		cout<<isHamilton()<<endl;
	}
}

