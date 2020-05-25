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

bool check(){
	stack<char> st;
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
		else{
			if(st.empty()) return 0;
			if(s[i]==')'){
				if(st.top()!='(') return 0; 
				else st.pop();
			} 
			else if(s[i]==']'){
				if(st.top()!='[') return 0; 
				else st.pop();
			}
			else{
				if(st.top()!='{') return 0; 
				else st.pop();
			}
		}
	}
	if(st.empty()) return 1;
	return 0;
}
main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<(check()?"YES":"NO")<<endl;
	}
}

