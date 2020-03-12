#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ull unsigned long long
#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first

const int MAX=107;
using namespace std;

int t;
int n, m, p;
ll a[MAX], b[MAX];

void print(){
	for(int i=0; i<p; ++i) cout<<a[i]<<" ";
	FOR(i, 0, m) cout<<b[i]<<" ";
	FOR(i,p,n) cout<<a[i]<<" ";
	cout<<endl;
}
main(){
	cin>>t;
	FOR(i,1,t+1){
		cin>>n>>m>>p;
		cout<<"Test "<<i<<":"<<endl;
		FOR(i,0,n) cin>>a[i];
		FOR(i,0,m) cin>>b[i];
		print();
	}
}

