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

int value(int a, int b, char x){
	if(x=='+') return a+b;
	if(x=='-') return a-b;
	if(x=='*') return a*b;
	if(x=='/') return a/b;
}
int postfixToInfix(){
	stack<int> st;
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
			int a1=st.top(); st.pop();
			int a2=st.top(); st.pop();
			int ans=value(a2,a1,s[i]);
			st.push(ans);
		}
		else{
			st.push(s[i]-'0');
		}
	}
	return st.top();
}
main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<postfixToInfix()<<endl;
	}
}

