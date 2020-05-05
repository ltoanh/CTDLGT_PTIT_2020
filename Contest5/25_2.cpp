//tribonaci
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

int t, n;
ll f[60];

void findWay(){
	f[1]=1; f[2]=2; f[3]=4;
	for(int i=4; i<=50; ++i) f[i]=f[i-1]+f[i-2]+f[i-3];
}
main(){
	findWay();
	cin>>t;
	while(t--){
		cin>>n;
		cout<<f[n]<<endl;
	}
}

