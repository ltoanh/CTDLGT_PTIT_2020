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
		stack<char> st;
		for(int i=0; i<s.size(); ++i){
			if(s[i]==')'){
				if(!st.empty() && st.top()=='(') st.pop();
				else st.push(s[i]);
			}
			else st.push(s[i]);
		}
		int n=st.size();
		int d=0;
		while(!st.empty() && st.top()=='('){
			st.pop();
			d++;
		}
		cout<<n/2+d%2<<endl;
	}
}

