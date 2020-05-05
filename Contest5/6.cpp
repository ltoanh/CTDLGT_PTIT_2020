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

main(){
	cin>>t;
	while(t--){
		cin>>s;
		s = ' ' + s;
		vector< vector<bool> > f(1007, vector<bool> (1007,true));
		int n=s.size();
		for(int k=1; k<=n-1; ++k){
			for(int i=1; i<=n-k; ++i){
				int j=i+k;
				f[i][j] = false;
				if(s[i]==s[j]){
					f[i][j] = f[i+1][j-1];
				}
			}
		}
		int Fopt = 1;
		for(int i=1; i<n; ++i){
			for(int j=i+1; j<=n; ++j){
				if(f[i][j] && j-i+1<=j) Fopt=max(Fopt, j-i+1); 
			}
		}
		cout<<Fopt<<endl;
	}
}

