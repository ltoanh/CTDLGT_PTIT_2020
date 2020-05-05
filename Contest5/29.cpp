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

int solve(){
	int f[50], n=s.size();
	memset(f, 0, sizeof(f));
	if(s[0]=='0') return 0;
	f[0] = f[1] = 1;
	for(int i=2; i<=n; ++i){
		if(s[i-1]!='0') f[i]=f[i-1];
		if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<'7')){
			f[i] = f[i] + f[i-2];
		} 
	}
	return f[n];
}
main(){
	cin>>t;
	while(t--){
		cin>>s;
		cout<<solve()<<endl;
	}
}

