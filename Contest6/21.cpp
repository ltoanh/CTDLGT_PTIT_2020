#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, n;
int a[10007];

bool cmp(ii &x, ii &y){
	if(x.F == y.F) return x.S < y.S;
	return x.F > y.F;
}

main(){
	cin>>t;
	while(t--){
		vii res;
		cin>>n;
		for(int i = 1; i <= n; ++i) cin>>a[i];
		sort(a + 1, a + n + 1);
		int len = 1;
		for(int i = 2; i <= n; ++i){
			if(a[i] == a[i - 1]) len++;
			else{
				res.pb({len, a[i-1]});
				len = 1;
			}
		}
		res.pb({len, a[n]});
		sort(res.begin(), res.end(), cmp);
		for(int i = 0; i < res.size(); ++i){
			for(int j = 1; j <= res[i].F; ++j) cout<<res[i].S<<" ";
		}
		cout<<endl;
	}
}

