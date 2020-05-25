//wr
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
	if(x=='*' || x=='/') return 2;
	if(x=='+' || x=='-') return 1;
	return 0;
}

int calc(int a, int b, char x){
	if(x=='+') return a+b;
	if(x=='-') return a-b;
	if(x=='*') return a*b;
	if(x=='/') return a/b;
}

int solve(){
	stack<char> st;
	stack<int> value;
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='('){
			st.push(s[i]);
		}
		else if(isdigit(s[i])){
			int num=0;
			while(i<s.size() && isdigit(s[i])){
				num=num*10+(s[i]-'0');
				i++;
			}
			value.push(num);
		}
		else if(s[i]==')'){
			while(!st.empty() && st.top()!='('){
				int t2=value.top(); value.pop();
				int t1=value.top(); value.pop();
				char x = st.top(); st.pop();
				value.push(calc(t1,t2,x));
			}
			if(!st.empty()) st.pop();
		}
		else{
			while(!st.empty() && pri(st.top()) >= pri(s[i])){
				int t2=value.top(); value.pop();
				int t1=value.top(); value.pop();
				char x = st.top(); st.pop();
				value.push(calc(t1,t2,x));
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		int t2=value.top(); value.pop();
		int t1=value.top(); value.pop();
		char x = st.top(); st.pop();
		value.push(calc(t1,t2,x));
	}
	return value.top();
}
main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<solve()<<endl;
	}
}

