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
int a[100007];

void solve(){
	stack<int> value;
	stack<int> index;
	vii res;
	value.push(a[0]); index.push(0);
	for(int i=1; i<n; ++i){
		while(!value.empty() && a[i]>value.top()){
			int t1=value.top(); value.pop();
			int t2=index.top(); index.pop();
			res.pb({t2, a[i]});
		}
		value.push(a[i]);
		index.push(i);
	}
	if(res.size()==0){
		for(int i=0; i<n; ++i) cout<<-1<<" ";
		return;
	}
	sort(res.begin(), res.end());
	int j=0;
	for(int i=0; i<n; ++i){
		if(j<res.size() && res[j].F==i){
			cout<<res[j].S<<" ";
			j++;
		}
		else cout<<-1<<" ";
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		solve();
		cout<<endl;
	}
}

