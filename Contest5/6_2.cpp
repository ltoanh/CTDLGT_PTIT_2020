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

int t;
string s;
int f[1007][1007];

main(){
	cin>>t;
	while(t--){
		cin>>s;
		int res=1;
		s = ' ' + s;
		memset(f, 0, sizeof(f));
		int n = s.size();
		for(int i=1; i<=n; ++i) f[i][i] = 1;
		for(int k=1; k<=n-1; ++k){
			for(int i=1; i<=n-k; ++i){
				int j=i+k;
				if(s[i]==s[j] && k>1) f[i][j] = f[i+1][j-1];
				else if(s[i]==s[j] && k==1) f[i][j] = 1;
				else f[i][j] = 0;
				
				if(f[i][j]) res = max(res, j-i+1); 
			}
		}
		cout<<res<<endl;
	}
}

