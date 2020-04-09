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
string ans;

main(){
	cin>>t;
	while(t--){
		string n="0";
		cin>>ans;
		n+=ans;
		for(int i=1; i<n.size(); ++i){
			n[i]=((n[i-1]-'0')^(n[i]-'0'))+'0';
			cout<<n[i];
		}
		cout<<endl;
	}
}

