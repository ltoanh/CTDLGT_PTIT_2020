#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, n, a[1007], b[1007];

int biSearch(int l, int r, int x){
	if(l<=r){
		int m=(r+l)/2;
		if(x==a[m]) return m;
		if(x<a[m]) return biSearch(l, m-1, x);
		return biSearch(m+1, r, x);
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; ++i){
			cin>>a[i];
			b[i] = a[i];
		}
		sort(a+1, a+n+1);
		int res=0;
		for(int i=1; i<=n; ++i){
			if(a[i]!=b[i]){
				int vt=biSearch(i, n, b[i]);
				swap(b[i], b[vt]);
				res++;
			}
		}
		cout<<res<<endl;
	}
}

