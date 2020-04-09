#include<bits/stdc++.h>
#define FOR(i,a,b) for(ll i=a; i<=b; ++i)
#define nFOR(i,a,b) for(ll i=a; i>=b; --i)

#define ull unsigned long long
#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first

const int MAX=27;
using namespace std;

int t, n;
ll k;
ll a[MAX][MAX];
int p, row, col;

void print(){
	FOR(i,1,n){
		FOR(j,1,n) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}

void matrix(){
	while(k>0){
		FOR(j,p,col) a[p][j]=k--;
		FOR(i,p+1,row) a[i][col]=k--;
		if(p!=row){
			nFOR(j,col-1,p) a[row][j]=k--;
		}
		if(p!=col-1){
			nFOR(i,row-1,p+1) a[i][p]=k--;
		}
		p++; col--; row--;
	}
}

main(){
	cin>>t;
	FOR(i,1,t){
	   cin>>n;
	   p=1, row=col=n;
	   cout<<"Test "<<i<<":"<<endl;
	   k=n*n;
	   matrix();
	   print();
	}
}

