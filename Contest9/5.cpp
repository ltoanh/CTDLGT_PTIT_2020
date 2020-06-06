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

main(){
	cin>>t;
	while(t--){
		priority_queue<int, vi, greater<int> > q[1007];
		cin>>n>>m;
		while(m--){
			int x, y; cin>>x>>y;
			q[x].push(y);
		}
		for(int i=1; i<=n; ++i){
			cout<<i<<": ";
			while(!q[i].empty()){
				cout<<q[i].top()<<" ";
				q[i].pop();
			}
			cout<<endl;
		}
	}	
}

