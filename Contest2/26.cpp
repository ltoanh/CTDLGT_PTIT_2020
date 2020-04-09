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

int t, k;
string s, res;

void Try(int k){
	if(k==0) return;
	for(int i=0; i<s.size()-1; ++i){
		for(int j=i+1; j<s.size(); ++j){
			if(s[i]<s[j]){
				swap(s[i], s[j]);
				if(s>res) res=s;
				Try(k-1);
				swap(s[i], s[j]);
			}
		}
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>k>>s;
		res=s;
		Try(k);
		cout<<res<<endl;
	}
}

