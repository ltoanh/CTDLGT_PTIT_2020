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

main(){
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>s;
		s = "+" + s;
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
		for(int i=1; i<s.size(); ++i){
			if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
				cout<<s[i];
			}
			else if(s[i]=='+'){
				if(changeOperator.front()) cout<<'+';
				else cout<<'-';
				changeOperator.pop();
			}
			else if(s[i]=='-'){
				if(changeOperator.front()) cout<<'-';
				else cout<<'+';
				changeOperator.pop();
			}
		}
		cout<<endl;
	}
}

