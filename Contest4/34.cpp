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

int t, m, n;
int a[107], b[107];

main(){
	cin>>t;
	while(t--){
		cin>>m>>n;
		for(int i=0; i<m; ++i) cin>>a[i];
		for(int i=0; i<n; ++i) cin>>b[i];
		int res[300]={0};
		for(int i=0; i<m; ++i){
			for(int j=0; j<n; ++j) res[i+j]+=a[i]*b[j];
		}
		for(int i=0; i<=m+n-2; ++i) cout<<res[i]<<" ";
		cout<<endl;
	}
}

