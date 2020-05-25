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
		stack<char> st;
		getline(cin, s);
		for(int i=0; i<=s.size(); ++i){
			if(s[i]==' ' || i==s.size()){
				while(!st.empty()){
					cout<<st.top();
					st.pop();
				}
				cout<<" ";
			}
			else st.push(s[i]);
		}
		cout<<endl;
	}	
}

