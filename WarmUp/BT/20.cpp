#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ull unsigned long long
#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first

const int MAX=107;
using namespace std;

int n, a[MAX], b[MAX];

bool solve(){
	for(int i=0; i<n; ++i){
		if(a[i]>b[i]) return 0;
	}
	return 1;
}
main(){
	cin>>n;
	FOR(i,0,n) cin>>a[i];
	FOR(i,0,n) cin>>b[i];
	sort(a,a+n);
	sort(b,b+n);
	cout<<(solve()?"YES":"NO")<<endl;
}

