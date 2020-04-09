#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first
const int MAX=1e+5;
using namespace std;

int t;
string x;

main(){
	cin>>t;
	while(t--){
		cin>>x;
		if(x[0]==x[x.size()-1]) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

