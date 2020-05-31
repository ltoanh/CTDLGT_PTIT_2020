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

int solve(int n, int m){
	if(n==m || (n<=0 && m>0)) return 0;
	if(n>m) return n-m;
	if(m%2) return 1+solve(n,m+1);
	return 1+solve(n,m/2);
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		cout<<solve(n,m)<<endl;
	}
}

