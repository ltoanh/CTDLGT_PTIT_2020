#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e6+7;

using namespace std;

int t, n;

main(){
	cin>>t;
	while(t--){
		ull Fopt=0;
		priority_queue< int, vi, greater<int> > L;
		cin>>n;
		for(int i=0; i<n; ++i){
			int x; cin>>x;
			L.push(x);
		}
		while(L.size()>1){
			int ans=0;
			ans+=L.top(); L.pop();
			ans+=L.top(); L.pop();
			Fopt+=(ull)ans;
			L.push(ans);
		}
		cout<<Fopt<<endl;
	}
}

