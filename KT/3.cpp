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

int t;
string s;

int solve(int n){
	int f[n+7][n+7];
	memset(f, 0, sizeof(f));
	for(int k=1; k<n; ++k){
		for(int i=0, j=k; j<n; ++j, ++i){
			if(s[i]==s[j]){
				f[i][j] = f[i+1][j-1];
			}
			else f[i][j] = min(f[i+1][j], f[i][j-1]) +1;
		}
	}
	return f[0][n-1];
}
main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<solve(s.size())<<endl;
	}
}

