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

ll t, n, a[MAX], leftSmaller[MAX], rightSmaller[MAX];

void right(){
	stack<ll> st;
	for(int i=n-1; i>=0; --i){
		while(!st.empty() && a[st.top()]>=a[i])
			st.pop();
		if(!st.empty()) rightSmaller[i]=st.top();
		else rightSmaller[i]=n;
		st.push(i);
	}
}

void left(){
	stack<ll> st;
	for(int i=0; i<n; ++i){
		while(!st.empty() && a[st.top()]>=a[i])
			st.pop();
		if(!st.empty()) leftSmaller[i]=st.top();
		else leftSmaller[i]=-1;
		st.push(i);
	}
}
ll solve(){
	ll Fopt=-1;
	for(int i=0; i<n; ++i){
		Fopt=max((ll)(rightSmaller[i]-leftSmaller[i]-1)*1LL*a[i], Fopt);
	}
	return Fopt;
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		right(); left();
		cout<<solve()<<endl;
	}
}

