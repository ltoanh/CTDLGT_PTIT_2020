#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e5+7;
const int M = 1e9 + 7;
using namespace std;

int t = 1;
int a[1007], f[1007][57]={0};

main(){
	cin>>t;
	while(t--){
		int n, k;
		memset(f, -1, sizeof(f));
		cin>>n>>k;
		for(int i = 1; i <= n; ++i){
			cin>>a[i];
			a[i] %= k;
		}
		f[0][0] = 0;
		for(int i = 1; i <= n; ++i){
			for(int j = 0; j < k; ++j){
				f[i][j] = max( f[i-1][j], f[i-1][(j - a[i] + k) % k] + 1);
			}
		}
		cout<<f[n][0]<<endl;
	}
}

