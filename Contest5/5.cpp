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
const int mod=1e9+7;
using namespace std;
int t;
int n, k;
int C[1007][1007];

void Solve(){
	memset(C, 0, sizeof(C));
	for(int i=0; i<=1000; ++i){
		for(int j=0; j<=i; ++j){
			if(j==0 || i==j) C[i][j]=1; 
			else C[i][j] = (C[i-1][j-1] + C[i-1][j])%mod;
		}
	}
} 
main(){
	Solve();
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<C[n][k]<<endl;
	}
}

