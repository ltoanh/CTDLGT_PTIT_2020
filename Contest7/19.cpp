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

int t;
string s;

void solve(){
	stack<int> st;
	for(int i=0; i<=s.size(); ++i){
		if(s[i]=='I' || i==s.size()){
			cout<<i+1;
			while(!st.empty()){
				cout<<st.top();
				st.pop();
			}
		}
		else st.push(i+1);
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>s;
		solve();
		cout<<endl;
	}	
}

