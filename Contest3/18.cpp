#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e6+7;

using namespace std;

int t, n, d, a, b;
int res[MAX];

bool solve(){
	while(d<=250000){
		if((n-d)%3==0){
			b=(n-4*d)/3;
			int ans=n-7*b;
			if(ans%4==0 && ans>=0 && b>=0){
				a=(n-7*b)/4;
				return 1;
			}
		}
		d++;
	}
	return 0;
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		d=0;
		if(solve()){
			for(int i=0; i<a; ++i) cout<<4;
			for(int i=0; i<b; ++i) cout<<7;
		}
		else cout<<-1;
		cout<<endl;
	} 
}

