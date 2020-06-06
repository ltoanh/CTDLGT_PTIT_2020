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

int t, n, m, a[1005][1005];

int findMinStep(){
	bool visit[n+7][m+7] = {0};	
	queue< ii > q;
	q.push({1,1});
	int st=0;
	while(!q.empty()){
		int len=q.size();
		while(len--){
			ii qty=q.front(); q.pop();
			int i=qty.F, j=qty.S;
			if(visit[i][j]) continue;
			if(i==n && j==m){
				return st;
			}
			visit[i][j] = 1;
			if(i + a[i][j] <= n)
				q.push({i + a[i][j], j});
			if(j + a[i][j] <= m)
				q.push({i, j + a[i][j]});
		}
		st++;
	}
	return -1;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=m; ++j) cin>>a[i][j];
		}
		
		cout<<findMinStep()<<endl;
	}
}

