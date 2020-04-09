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
string n;

main(){
	cin>>t;
	while(t--){
		string ans="0";
		cin>>n;
		ans+=n;
		for(int i=1; i<ans.size(); ++i){
			int res=(ans[i-1]-'0')^(ans[i]-'0');
			cout<<res;
		}
		cout<<endl;
	}
}

