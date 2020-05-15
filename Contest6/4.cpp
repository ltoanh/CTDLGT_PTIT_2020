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
int a, b;

main(){
	cin>>t;
	while(t--){
		int c[MAX];
		memset(c, 0, sizeof(c));
		cin>>n>>m;
		for(int i = 0; i < n; ++i){
			cin>>a;
			c[a]++;
		}
		for(int i = 0; i < m; ++i){
			cin>>b;
			c[b]++;
		}
		for(int i = 0; i < MAX; ++i){
			if(c[i] >= 1) cout<<i<<" ";
		}
		cout<<endl;
		for(int i = 0; i < MAX; ++i){
			if(c[i] > 1) cout<<i<<" ";
		}
		cout<<endl;
	}
}

