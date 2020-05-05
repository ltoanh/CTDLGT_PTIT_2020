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

int f[10007];

int findWay(){
	for(int i = 0; i<= 10000; ++i) f[i] = INT_MAX;
	f[0] = 0;
	for(int i = 1; i <= 10000; ++i){
		for(int j = 1; j*j <= i; ++j){
			f[i] = min(f[i], f[i - j*j] + 1);
		}
	}
}
main(){
	int t, n;
	findWay();
	cin>>t;
	while(t--){
		cin>>n;
		cout<<f[n]<<endl;
	}
}

