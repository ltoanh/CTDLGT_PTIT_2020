#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=3*1e5+7;

using namespace std;

int n, d=0;
int a[MAX];

void print(){
	for(int i=1; i<=n; ++i) cout<<a[i]<<" ";
	cout<<endl;
}
void Solve(){
	while(1){
		int i=n-1;
		while(i>0 && a[i]<a[i+1]) i--;
		if(i==0) return;
		int k=n;
		while(k>i && a[k]>a[i]) k--;
		swap(a[i], a[k]);
		int l=k+1, r=n;
		while(l<r){
			swap(a[l], a[r]);
			l++; r--;
		}
		print();
		d++;
	}
}
main(){
	cin>>n;
	for(int i=1; i<=n; ++i) cin>>a[i];
	Solve();
	cout<<d;	
}

