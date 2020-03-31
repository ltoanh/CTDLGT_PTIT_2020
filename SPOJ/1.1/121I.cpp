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

int t, i, n;
string s;

main(){
	cin>>t;
	for(int i=1; i<=t; ++i){
		cin>>i>>n>>s;
		cout<<i<<" ";
		for(int j=0; j<s.size(); ++j){
			for(int k=1; k<=n; ++k) cout<<s[j];
		}
		cout<<endl;
	}
}

