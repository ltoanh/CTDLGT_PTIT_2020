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

using namespace std;

int t, n;
vii a;
bool cmp(ii x, ii y){
	return x.F<=y.F;
}
bool solve(){
	sort(a.begin(), a.end(), cmp);
	for(int i=0; i<n; ++i){
		if(a[i].S!=i && a[i].S!=n-i-1) return 0;
	}
	return 1;
}
main(){
	cin>>t;
	while(t--){
		a.clear();
		cin>>n;
		for(int i=0; i<n; ++i){
			int x; cin>>x;
			a.pb({x, i});
		}
		cout<<(solve()?"Yes":"No")<<endl;
	}
}

