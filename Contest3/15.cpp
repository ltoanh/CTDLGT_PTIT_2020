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
int t, n, s, m;

int solve(){
	if(n<m || (n==m && s>=7) || 6*n<7*m) return -1;
	int ans=s*(int)m/n+((s*m)%n?1:0);
	return ans;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>s>>m;
		cout<<solve()<<endl;
	}
}

