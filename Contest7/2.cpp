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

int t, val;
string s;
stack<int> st;

main(){
	cin>>t;
	while(t--){
		cin>>s;
		if(s=="PUSH"){
			cin>>val;
			st.push(val);
		}		
		else if(s=="PRINT"){
			if(st.empty()) cout<<"NONE"<<endl;
			else{
				cout<<st.top()<<endl;
			}
		}
		else{
			if(!st.empty()) st.pop();
		}
	}
}

