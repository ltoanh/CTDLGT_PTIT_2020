#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e+5;

using namespace std;

int t, n, m, k;
int a, b;

main(){
	cin>>t;
	while(t--){
		priority_queue<int, vector<int>, greater<int> > q;
		cin>>n>>m>>k;
		for(int i=0; i<n; ++i){
			int x; cin>>x;
			q.push(x);
		}
		for(int j=0; j<m; ++j){
            int x; cin>>x;
            q.push(x);
		}
		int res;
		while(!q.empty() && k>0){
			res=q.top(); q.pop();
			k--;
		}
		cout<<res<<endl;
	}
}

