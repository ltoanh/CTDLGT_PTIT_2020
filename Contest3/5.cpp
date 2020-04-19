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

int t, n, k, a[100];

main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0; i<n; ++i) cin>>a[i];
		sort(a, a+n);
		int x=0, y=0;
		int n1=k, n2=n-k;
		if(n1>n2) swap(n1,n2);
		for(int i=0; i<n1; ++i) x+=a[i];
		for(int i=n1; i<n; ++i) y+=a[i];
		cout<<y-x<<endl;
	}
}

