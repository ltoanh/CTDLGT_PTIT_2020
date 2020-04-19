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

int t, n, a[100];

main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		sort(a, a+n);
		ll x=0, y=0;
		for(int i=0; i<n; i+=2){
			x=(ll)x*10+a[i];
		}
		for(int i=1; i<n; i+=2){
			y=(ll)y*10+a[i];
		}
		cout<<x+y<<endl;
	}
}

