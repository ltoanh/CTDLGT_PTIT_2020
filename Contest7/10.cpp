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
string s1, s2;

string convert(string s){
	queue<int> changeOperator;
	bool fl=1;
	for(int i=1; i<s.size(); ++i){
		if(s[i]=='(' && s[i-1]=='-') fl=!fl;
		else if(s[i]==')'){
			fl=1;
			continue;
		} 
		if(s[i]=='+' || s[i]=='-') changeOperator.push(fl);
	}
	string ans="";
	for(int i=1; i<s.size(); ++i){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
			ans+=s[i];
		}
		else if(s[i]=='+'){
			if(changeOperator.front()) ans+='+';
			else ans+='-';
			changeOperator.pop();
		}
		else if(s[i]=='-'){
			if(changeOperator.front()) ans+='-';
			else ans+='+';
			changeOperator.pop();
		}
	}
	return ans;
}
main(){
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>s1>>s2;
		s1 = "+" + s1;
		s2 = "+" + s2;
		if(convert(s1)==convert(s2)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

