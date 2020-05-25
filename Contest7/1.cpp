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

string s;
int val;
int a[207];

void show(stack<int> s){
	if(s.empty()) cout<<"empty";
	else{
		int i=s.size(), n=s.size();
		while(!s.empty()){
			a[i--]=s.top();
			s.pop();
		}	
		for(int j=1; j<=n; ++j) cout<<a[j]<<" ";
	}
	cout<<endl;
}
main(){
	stack<int> st;
	while(cin>>s){
		if(s=="push"){
			cin>>val;
			st.push(val);
		}
		else{
			if(s=="show") show(st);
			else{
				if(st.empty()) cout<<"empty"<<endl;
				else st.pop();
			}
		}
	}
}

