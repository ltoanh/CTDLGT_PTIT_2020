/*
	PRIM
*/

#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ii pair < double , int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second

const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

struct graph{
    int d, x, y;
};

int t, n;
bool vis[107];
vii a[107];

void solve(){
    double res=0;
	priority_queue< ii, vii, greater<ii> > q;
	q.push({0,1});
	while(!q.empty()){
		ii u=q.top(); q.pop();
		double wi=u.F; int v=u.S;
		if(!vis[v]){
			res+=wi;
			vis[v]=1;
			for(int i=0; i<a[v].size(); ++i){
				ii x=a[v][i];
				if(!vis[x.S]){
					q.push({x.F,x.S});
				}
			}
		}
	} 	
	cout <<setprecision(6)<<fixed<<res<<endl;
}
main(){
    cin>>t;
    while(t--){
        cin>>n;
        double u, v;
        graph b[n+7];
        memset(vis, 0, sizeof(vis));
        for(int i=1; i<=n; ++i){
            cin>>u>>v;
            a[i].clear();
            b[i].d=i; b[i].x=u; b[i].y=v;
        }
        for(int i=1; i<=n; ++i){
            for(int j=i+1; j<=n; ++j){
                double ans=sqrt((b[i].x-b[j].x)*(b[i].x-b[j].x) + (b[i].y-b[j].y)*(b[i].y-b[j].y));
                a[i].pb({ans, j}); a[j].pb({ans, i});
            }
        }
        solve();
    }
}
