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
	while(t--){
		cin>>s;
		stack<string> res;
		for(int i=s.size()-1; i>=0; --i){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
				string a1=res.top(); res.pop();
				string a2=res.top(); res.pop();
				string ans="("+a1+s[i]+a2+")";
				res.push(ans);
			}
			else{
				string ans="";
				ans+=s[i];
				res.push(ans);
//				res.push(string(1, s[i])); chuyen sang string
			}
		}
		cout<<res.top()<<endl;
	}
}

