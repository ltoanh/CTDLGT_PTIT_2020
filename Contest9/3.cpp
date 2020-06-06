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

int n, x;

main(){
	cin>>n;
	priority_queue<int, vi, greater<int> > q[1007];
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			cin>>x;
			if(x>0) q[i].push(j);
		}
	}
	for(int i=1; i<=n; ++i){
		while(!q[i].empty()){
			cout<<q[i].top()<<" ";
			q[i].pop();
		}
		cout<<endl;
	}
}

