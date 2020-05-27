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
		int num;
		stack<int> value;
		stack<char> st;
		for(int i=0; i<s.size(); ++i){
			if(isdigit(s[i])){
				num=0;
				while(isdigit(s[i])){
					num=num*10+(s[i]-'0');
					++i;
				}		
				if(!isdigit(s[i])) --i;
				value.push(num);
			}
			else if(s[i]==']'){
				string tmp="";
				if(!value.empty()){
					num=value.top();
					value.pop();
				}
				while(!st.empty() && st.top()!='['){
					tmp=st.top()+tmp;
					st.pop();
				}
				if(!st.empty() && st.top()=='[') st.pop();
				string ans="";
				for(int j=0; j<num; ++j) ans+=tmp;
				for(int j=0; j<ans.size(); ++j)
				    st.push(ans[j]);
			}
			else if(s[i]=='['){
				//[a[bc]]
				if(!isdigit(s[i-1])) value.push(1);
				st.push('[');
			}
			else st.push(s[i]);
		}
		string res="";
		while(!st.empty()){
		    res=st.top()+res;
		    st.pop();
		}
		cout<<res<<endl;
	}
}

