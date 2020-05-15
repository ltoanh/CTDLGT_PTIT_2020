#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e6 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, n, x;

main(){
	cin>>t;
	while(t--){
		cin>>n;
		string s0, s1, s2;
		s0=s1=s2="";
		for(int i=0; i<n; ++i){
			cin>>x;
			switch(x){
				case 0: s0+="0 "; break;
				case 1: s1+="1 "; break;
				case 2: s2+="2 "; break;
			}	
		}
		cout<<s0<<s1<<s2<<endl;
	}
}

