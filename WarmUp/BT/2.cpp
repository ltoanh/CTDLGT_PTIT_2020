#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first
const int MAX=1e+5;
using namespace std;

int t;
ll x;

int check(ll x){
	while(x/10){
		x/=10;
	}
	return x;
}
main(){
	cin>>t;
	while(t--){
		cin>>x;
		cout<<(check(x)==x%10?"YES":"NO")<<endl;
	}
}

