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
int n, k, x;
int sum=0, ans, a[20];
int d=0;
using namespace std;

void Init(){
	cin>>n>>k;
	a[0]=0;
	for(int i=1; i<=n; ++i){
		cin>>x;
		sum+=x;
		a[i]=a[i-1]+x;
	}
}

void Try(int ans, int i, int k){
	if(i>n) return;
	if(k==1){
		if(a[n]-a[i-1]==ans){
			d++;
		}
		return;
	}
	for(int j=i; j<=n; ++j){
		if(a[j]-a[i-1]==ans){
			Try(ans, j+1, k-1);
		}
	}
}


main(){
	Init();
	if(k==1) d=1;
	else{
		for(int i=1; i<=n; ++i){
			int flag=a[i];
			Try(flag, i+1, k-1);
		}
	}
	cout<<d;
}

