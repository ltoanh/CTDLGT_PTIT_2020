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

string prefixToPostfix(){
	stack<string> infix;
	for(int i=s.size()-1; i>=0; --i){
		if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
			string a1=infix.top(); infix.pop();
			string a2=infix.top(); infix.pop();
			string ans=a1+a2+s[i];
			infix.push(ans);
		}
		else{
			string ans="";
			ans+=s[i];
			infix.push(ans);
		}
	}
	return infix.top();
}
main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<prefixToPostfix()<<endl;
	}
}

