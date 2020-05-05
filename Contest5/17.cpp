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

main(){
	int t; cin>>t;
	while(t--){
		int n, a[1007];
		cin>>n;
		for(int i=1; i<=n; ++i) cin>>a[i];
		int inc[1007], dec[1007];
		for(int i=1; i<=n; ++i) inc[i]=dec[i]=a[i];
		for(int i=2; i<=n; ++i){
			for(int j=i-1; j>0; --j){
				if(a[i]>a[j]) inc[i] = max(inc[i], inc[j]+a[i]);
			}
		}
		for(int i=n-1; i>=1; --i){
			for(int j=n; j>i; --j){
				if(a[i]>a[j]) dec[i] = max(dec[i], dec[j]+a[i]);
			}
		}
		int Fopt=0;
		for(int i=1; i<=n; ++i){
			Fopt=max(Fopt, inc[i]+dec[i]-a[i]);
		}
		cout<<Fopt<<endl;
	}
}

