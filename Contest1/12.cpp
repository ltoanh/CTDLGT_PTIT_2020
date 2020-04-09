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
int t, n, k;
int a[20]={0};

bool Check(){
	int d=0;
	for(int i=0; i<n; ++i){
		if(a[i]==1) d++;
	}
	return d==k;
}

bool Print(){
	for(int i=0; i<n; ++i) cout<<a[i];
	cout<<endl;
}

void Try(int i){
	if(i>=n){
		if(Check()) Print();
		return;
	}
	for(int j=0; j<2; ++j){
		a[i]=j;
		Try(i+1);
	}
}

main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		Try(0);
	}
}

