#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first
const int MAX=107;
using namespace std;

int t, n;
ll a[MAX];

bool check(){
	int l=1, r=n;
	while(l<=r){
		if(a[l]!=a[r]) return 0;
		l++; r--;
	}
	return 1;
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		FOR(i,1,n) cin>>a[i];
		cout<<(check()?"YES":"NO")<<endl;
	}
}

