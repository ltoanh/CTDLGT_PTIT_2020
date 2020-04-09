#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ull unsigned long long
#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first

const int MAX=10;
using namespace std;

int t, n;
ll a[MAX][MAX];
ll Fib[92];
int row, col, p, k;

void fibo(){
	Fib[1]=Fib[2]=1;
	for(int i=3; i<=90; ++i){
		Fib[i]=Fib[i-2]+Fib[i-1];
	}
}

void print(){
	FOR(i,1,n){
		FOR(j,1,n) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
void matrix(){
	while(k<=n*n){
		FOR(j,p,col) a[p][j]=Fib[k++];
		FOR(i,p+1,row) a[i][col]=Fib[k++];
		if(p!=row){
			nFOR(j,col-1,p) a[row][j]=Fib[k++];
		}
		if(p!=col-1){
			nFOR(i,row-1,p+1) a[i][p]=Fib[k++];
		}
		p++; row--; col--;
	}
	print();
}
main(){
	cin>>t;
	fibo();
	FOR(i,1,t){
		cin>>n;
		cout<<"Test "<<i<<":"<<endl;
		row=col=n;
		p=1, k=1;
		matrix();
	}
}

