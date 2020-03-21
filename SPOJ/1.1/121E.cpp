#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e+5;

using namespace std;

map<char, int> Ngto;
string s;
int M=0;

void Init(){
	Ngto['C']=12;
	Ngto['H']=1;
	Ngto['O']=16;
}

void Solve(){
	stack<int> st;
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='(') st.push(0);
		else if(s[i]==')'){
			int res=0;
			while(st.top()!=0 && !st.empty()){
				res+=st.top(); st.pop();
			}
			if(st.top()==0 && !st.empty()){
				st.pop();
				st.push(res);
			}
		}
		else if(s[i]>='2' && s[i]<='9'){
			if(!st.empty()){
				int res=st.top(); st.pop();
				res*=(s[i]-'0');
				st.push(res);
			}
		}
		else st.push(Ngto[s[i]]);
	}
	while(!st.empty()){
		M+=st.top(); st.pop();
	}
	cout<<M;
}

main(){
	cin>>s;
	Init();
	Solve();
}

