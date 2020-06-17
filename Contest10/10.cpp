#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

struct Graph{
	int F, S, val;
};

bool cmp(Graph a, Graph b){
	return a.val<b.val;
}

int t, n, m;
int parent[1007];

int Find(int u){
	return parent[u]==-1?u:(Find(parent[u]));
}

void Union(int i, int j){
	int x=Find(i), y=Find(j);
	if(x!=y) parent[i]=j;
}

bool Cycle(vector<Graph> a){
	memset(parent, -1, sizeof(parent));
	for(int i=0; i<a.size(); ++i){
		int x=Find(a[i].F), y=Find(a[i].S);
		if(x==y) return 1;
		Union(x, y);
	}
	return 0;
}

void Kruskal(Graph G[]){
	vector<Graph> Cycles;
	sort(G, G+m, cmp);
	int res=G[0].val;
	Cycles.pb(G[0]);
	for(int i=1; i<m; ++i){
		Cycles.pb(G[i]);
		if(!Cycle(Cycles)) res+=G[i].val;
		else{
			Cycles.pop_back();
			continue;
		}
		if(Cycles.size()>n-1) break;
	}
	cout<<res<<endl;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		Graph G[m+7];
		for(int i=0; i<m; ++i) cin>>G[i].F>>G[i].S>>G[i].val;
		Kruskal(G);
	}
}

