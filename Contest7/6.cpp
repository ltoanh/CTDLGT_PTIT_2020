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

bool check(){
	stack<char> st;
	for(int i=0; i<s.size(); ++i){
		if(s[i]==')'){
			bool fl=1;
			char top = st.top();
			st.pop();
			while(!st.empty() && top!='('){
				if(top=='+' || top=='-' || top=='*' || top=='/')
					fl=0;
				top=st.top();
				st.pop();
			}
			if(fl) return 1;
		}
		else st.push(s[i]);
	}
	return 0;
}
main(){
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin, s);
		cout<<(check()?"Yes":"No")<<endl;
	}
}

