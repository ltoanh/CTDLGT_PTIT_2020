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
string x, y;
ll a, b;
ll convertToDec(string x){
	reverse(x.begin(), x.end());
	ll ans=0;
	for(int i=0; i<x.size(); ++i){
		ans+=(x[i]-'0')*pow(2,i);
	}	
	return ans;
}
main(){
	cin>>t;
	while(t--){
		cin>>x>>y;
		a=convertToDec(x), b=convertToDec(y);
		cout<<a*b<<endl;
	}
}

