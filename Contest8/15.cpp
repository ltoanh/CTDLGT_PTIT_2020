#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, n, m, a[1007][1007];

struct ii{
	int F;
	int S;
};
struct pii{
	ii F;
	int S;
};

main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0; i<n; ++i){
			for(int j=0; j<m; ++j) cin>>a[i][j];
		}
		queue< pii > q;
		q.push({{1,1}, 0});
		int Fopt=INT_MAX;
		while(!q.empty()){
			pii qty=q.front(); q.pop();
			if(qty.F.F==n-1 && qty.F.S==m-1){
				Fopt=qty.S;
				break;
			}
			int i=qty.F.F, j=qty.F.S;
			if(i+a[i][j] < n) q.push({{i+a[i][j], j}, qty.S+1});
			if(j+a[i][j] < m) q.push({{i, j +a[i][j]}, qty.S+1});
		}
		cout<<Fopt<<endl;
	}
}

