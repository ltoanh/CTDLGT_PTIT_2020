//wr
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

int t;
int n, k, a[47];
int res[47], d;

bool check(int x){
	for(int i=1; i<=k; ++i){
		if(x==a[i]) return 0;
	}
	return 1;
}
void Solve(){
	int i=k;
	while(i>0 && a[i]>=n-k+i) i--;
	if(i<=0){
		d=k; return;
	}	
	d++;
	int ans=a[i]+1;
	for(int j=i+1; j<=k; ++j){
		if(check(++ans)) d++;
	}
}
main(){
	cin>>t;
	while(t--){
		d=0;
		cin>>n>>k;
		for(int i=1; i<=k; ++i) cin>>a[i];
		Solve(); 
		cout<<d<<endl;
	}
}

