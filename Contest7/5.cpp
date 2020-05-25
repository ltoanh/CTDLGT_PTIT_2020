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

int findMaxBrackets(){
	stack<int> st;
	int Fopt=0;
	st.push(-1);
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='(') st.push(i);
		else{
			st.pop();
			if(!st.empty()) Fopt=max(Fopt, i-st.top());
			else st.push(i);
		}
	}
	return Fopt;
}
main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<findMaxBrackets()<<endl;
	}
}

