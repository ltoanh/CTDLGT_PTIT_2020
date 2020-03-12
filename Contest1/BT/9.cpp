#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ull unsigned long long
#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first

const int MAX=1e+5;
using namespace std;

int t;
string s;

bool check(){
	bool flag=1;
	FOR(i,0,s.size()-1) if(s[i]>s[i+1]) flag=0;
	if(flag) return 1;
	flag=1;
	FOR(i,0,s.size()-1) if(s[i]<s[i+1]) return 0;
	return 1; 
	 
}
main(){
	cin>>t;
	while(t--){
	   cin>>s;
	   cout<<(check()?"YES":"NO")<<endl;
	}
}

