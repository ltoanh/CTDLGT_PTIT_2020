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

int f[107][107];

main(){
	int t; cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		s = ' ' + s;
		memset(f, 0, sizeof(f));
		for(int i = 1; i<=n; ++i){
			for(int j=1; j<=n; ++j){
				if(s[i]==s[j] && i!=j) f[i][j] = f[i-1][j-1]+1;
				else f[i][j] = max(f[i-1][j], f[i][j-1]);
			}
		}
		cout<<f[n][n]<<endl;
	}
}

