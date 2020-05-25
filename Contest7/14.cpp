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

string postfixToPrefix(){
	stack<string> st;
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
			string a1=st.top(); st.pop();
			string a2=st.top(); st.pop();
			string ans=s[i]+a2+a1;
			st.push(ans);
		}
		else{
			string ans="";
			ans+=s[i];
			st.push(ans);
		}
	}
	return st.top();
}
main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<postfixToPrefix()<<endl;
	}
}

