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

int pri(char x){
	if(x=='^') return 3;
	if(x=='*' || x=='/') return 2;
	if(x=='+' || x=='-') return 1;
	return 0;
}
main(){
	cin>>t;
	while(t--){
		cin>>s;
		stack<char> st;
		for(int i=0; i<s.size(); ++i){
			if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')) cout<<s[i];
			else if(s[i]=='(') st.push(s[i]);
			else if(s[i]==')'){
				while(!st.empty() && st.top()!='('){
					cout<<st.top();
					st.pop();
				}
				if(!st.empty()) st.pop();
			}
			else{
				while(!st.empty() && pri(st.top()) >= pri(s[i])){
					cout<<st.top();
					st.pop();
				}
				st.push(s[i]);
			}
		}
		while(!st.empty()){
			if(st.top()!='(') cout<<st.top();
			st.pop();
		}
		cout<<endl;
	}
}

