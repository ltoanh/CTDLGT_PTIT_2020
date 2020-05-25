#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e6 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, n, a[MAX], nextGreater[MAX], rightSmaller[MAX];

void findNext(int b[], string require){
	stack<int> st;
	for(int i=n-1; i>=0; --i){
		while(!st.empty() && ((require=="greater")?a[st.top()]<=a[i]:a[st.top()]>=a[i]))
			st.pop();
		if(!st.empty()) b[i]=st.top();
		else b[i]=-1;
		st.push(i);
	}
}
void solve(){
	findNext(nextGreater, "greater");
	findNext(rightSmaller, "smaller");
	for(int i=0; i<n; ++i){
		if(nextGreater[i]!=-1 && rightSmaller[nextGreater[i]]!=-1)
			cout<<a[rightSmaller[nextGreater[i]]]<<" ";
		else cout<<"-1 ";
	}
	cout<<endl;
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		solve();
	}
}

