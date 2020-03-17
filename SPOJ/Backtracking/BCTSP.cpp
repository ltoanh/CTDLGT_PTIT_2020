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

int n, del=0;
int C[20][20], x[20];
int c_min=INT_MAX, Fopt=INT_MAX;
bool Visited[20]={0};

void Init(){
	cin>>n;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j) cin>>C[i][j];
	}
}
// Tim c_min khac 0
void findCMin(){
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			if(C[i][j]){
				c_min=min(c_min, C[i][j]);
			}
		}
	}
}

void Try(int i){
	for(int j=2; j<=n; ++j){
		if(!Visited[j]){
			x[i]=j; Visited[j]=1;
			del+=C[x[i-1]][x[i]];
			if(i==n) Fopt=min(Fopt, del+C[x[n]][1]);
			else if(del+(n-i+1)*c_min<Fopt) Try(i+1);
			Visited[j]=0;
			del-=C[x[i-1]][x[i]];
		}
	}
}
main(){
	Init();
	findCMin();
	x[1]=1;
	Try(2);
	cout<<Fopt;
}

