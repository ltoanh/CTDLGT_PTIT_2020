#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ull unsigned long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first
const int MAX=1e+5;
using namespace std;

int t;
ull a, b;

main(){
	cin>>t;
	while(t--){
		cin>>a>>b;
		ull uc=__gcd(a,b);
		ull bc=a/uc*b;
		cout<<uc<<" "<<bc<<endl;
	}
}

