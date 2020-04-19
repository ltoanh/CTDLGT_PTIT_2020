#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
#define MAX 256

using namespace std;

int t;
string s;

main(){
	cin>>t;
	while(t--){
		cin>>s;
		int Fopt=0;
		int fre[MAX]={0};
	    for(int i=0; i<s.size(); ++i){
	        Fopt=max(Fopt, ++fre[s[i]]);
	    }
		if(Fopt>s.size()/2) cout<<-1; 
		else cout<<1;
		cout<<endl;
	}
}

