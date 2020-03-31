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

int n, d=1;
string s;

void Solve(){
	for(int i=0; i<n; ++i){
		if(s[i]=='L'){
			i+=1;
		}
		d+=1;
	}
	cout<<min(d,n);
}
main(){
	cin>>n>>s;
	Solve();
}

