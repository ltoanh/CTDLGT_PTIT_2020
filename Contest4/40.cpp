#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e3+7;

using namespace std;
int t, n;
int a[MAX];

int findPos(int l, int r){
	if(a[n]==0) return n;
	if(l<=r){
		int m=(l+r)/2;
		if(a[m]==0){
			if(a[m]!=a[m+1]) return m;
			return findPos(m+1,r);
		}
		return findPos(l,m-1);
	}
	return 0;
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; ++i) cin>>a[i];
		cout<<findPos(1,n)<<endl;
	}
}

