/*

f[i][j] so cach co duoc tong i bang cac so <= j
	i < j f[i][j] = 1;
	
*/
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
int n, k;
//in mod
main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector< vector<int> > f(k+7, vector<int> (n+7,0));
		f[0][0]=1;
		for(int i=0; i<=n; ++i) f[0][i] = 0;
		for(int i=0; i<=k; ++i) f[i][0] = 1;
		for(int i=1; i<=k; ++i){
			for(int j=0; j<=n; ++j){
				if(i>j) f[i][j] = f[i-1][j];
				else f[i][j] = f[i-1][j] + f[i][j-i];
			}
		}
		cout<<f[k][n]<<endl;
	}
}

