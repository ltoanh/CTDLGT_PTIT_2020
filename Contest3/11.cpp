#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
#define mod 1000000007
const int MAX=1e6+7;

using namespace std;

int t, n;

main(){
	t=1;
	while(t--){
		ull Fopt=0;
		priority_queue< int, vi, greater<int> > L;
		cin>>n;
		for(int i=0; i<n; ++i){
			int x; cin>>x;
			L.push(x);
		}
		while(L.size()>1){
			int x, y;
			x=L.top(); L.pop();
			y=L.top(); L.pop();
			int ans=(x%mod+y%mod)%mod;
			Fopt=(Fopt%mod+ans)%mod;
			L.push(ans);
		}
		cout<<Fopt%mod<<endl;
	}
}

