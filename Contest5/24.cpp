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

int t, n, m;
ll f[30][30];

void findWay(){
	for(int i=0; i<=25; ++i){
		f[i][0] = f[0][i] = 1;
	}
	for(int i=1; i<=25; ++i){
		for(int j=1; j<=25; ++j){
			f[i][j] = f[i-1][j] + f[i][j-1];
		}
	}
}
main(){
	findWay();
	cin>>t;
	while(t--){
		cin>>n>>m;
		cout<<f[n][m]<<endl;
	}
}

