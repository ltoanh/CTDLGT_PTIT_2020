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

int t;
string s;
main(){
	cin>>t;
	while(t--){
		cin>>s;
		int n = s.size();
		ll res = 0;
		for(int i = 1; i <= n; ++i){
			for(int j = 1; j <= i; ++j){
				string tmp = s.substr(i-j,j);
				ll ans;
				istringstream(tmp) >> ans;
				res += ans;
			}
		}
		cout<<res<<endl;
	}
}

