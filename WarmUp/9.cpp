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

int t, n;
int a[17];

void Solve(){
	for(int i=0; i<=n; ++i) a[i]=0;
	while(1){
		for(int i=1; i<=n; ++i){
			int ans=a[i-1]^a[i];
			cout<<ans;
		} 
		cout<<" ";
		int i=n;
		while(i>0 && a[i]==1) i--;
		if(i<=0) return;
		a[i]=1;
		for(int j=i+1; j<=n; ++j) a[j]=0;
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		Solve();	
		cout<<endl;
	}
}

