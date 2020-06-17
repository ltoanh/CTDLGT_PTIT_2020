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

int n, m;
vi parent, ranks, setSize;

int findSet(int v){
	return parent[v]==-1?v:(parent[v]=findSet(parent[v]));
}

int findSize(int i) {
    return setSize[findSet(i)];
}
        
void unionSet(int u, int v){
	int x=findSet(u), y=findSet(v);
	if(x!=y){
		if (ranks[x] > ranks[y]){
            setSize[findSet(x)] += setSize[findSet(y)];
            parent[y] = x;
        }
		else{
            setSize[findSet(y)] += setSize[findSet(x)];
            parent[x] = y;
            if (ranks[x] == ranks[y]) ranks[y]++;
        }
	}
}

main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		parent.assign(n+7, -1);
		ranks.assign(n+7, 0);
		setSize.assign(n+7, 1);
		int u, v, Fopt = 1;
		for(int i=1; i<=m; i++) {
			cin>>u>>v;
			unionSet(u, v);
			Fopt=max(findSize(u), Fopt);
		}
		cout<<Fopt<<endl;
	}
}

