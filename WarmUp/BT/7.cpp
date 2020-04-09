#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ull unsigned long long
#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first

const int MAX=30;
using namespace std;

int t;
int N, M;
ll a[MAX][MAX], b[MAX][MAX];
ll result[MAX][MAX];
void nhap(){
	FOR(i,1,N){
		FOR(j,1,M) cin>>a[i][j];
	}
}

void chuyenvi(){
	FOR(i,1,M){
		FOR(j,1,N) b[i][j]=a[j][i];
	}
}
void print(){
	FOR(i,1,N){
		FOR(j,1,N) cout<<result[i][j]<<" ";
		cout<<endl;
	}
	
}
void tich(){
	chuyenvi();
	FOR(i,1,N){
		FOR(j,1,N){
			result[i][j]=0;
			FOR(k,1,M){
				result[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	print();
}

main(){
	cin>>t;
	FOR(i,1,t){
	   	cin>>N>>M;
	   	nhap();
	    cout<<"Test "<<i<<":"<<endl;
		tich();
	}
}

