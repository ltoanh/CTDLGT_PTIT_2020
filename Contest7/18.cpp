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

stack<char> ope;
stack<ll> value;

int pri(char x){
	if(x=='*' || x=='/') return 2;
	if(x=='+' || x=='-') return 1;
	return 0;
}

ll calc(ll a, ll b, char x){
	if(x=='+') return a+b;
	if(x=='-') return a-b;
	if(x=='*') return a*b;
	if(x=='/') return a/b;
}

void update(){
	ll a = value.top(); value.pop();
	ll b = value.top(); value.pop();
	char c = ope.top(); ope.pop();
	value.push(calc(b, a, c));
}
ll solve(){
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='(') ope.push(s[i]);
		else if(isdigit(s[i])){
			ll num=0;
			while(i<s.size() && isdigit(s[i])){
				num=num*10+(s[i]-'0');
				i++;
			}
			if(!isdigit(s[i])) i--;
			value.push(num);
		}
		else if(s[i]==')'){
			while(!ope.empty() && ope.top()!='(') 
				update();
			if(ope.top()=='(') ope.pop();
		}
		else{
			while(!ope.empty() && pri(ope.top())>=pri(s[i])){
				update();
			}
			ope.push(s[i]);
		}
	}
	while(!ope.empty()) update();
	return value.top();
}
main(){
	cin>>t;
	while(t--){
		cin>>s;
		while(!value.empty()) value.pop();
		while(!ope.empty()) ope.pop();
		cout<<solve()<<endl;
	}
}

