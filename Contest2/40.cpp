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

int n;
int c[17][17], x[17], c_min=INT_MAX;
bool vis[17];
int Fopt=INT_MAX, sum=0;
//tim c_min!=0
void Find_Cmin(){
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			if(c[i][j]) c_min=min(c_min, c[i][j]);
		}
	}
}
//QL HVi
void Try(int i){
	for(int j=2; j<=n; ++j){
		if(!vis[j]){
			x[i]=j;
			vis[j]=1;
			sum+=c[x[i-1]][x[i]];
			if(i==n) Fopt=min(Fopt, sum+c[x[n]][1]);
			else if(sum+(n-i+1)*c_min<Fopt)
				Try(i+1);
			vis[j]=0;
			sum-=c[x[i-1]][x[i]];
		}
	}
}
main(){
	cin>>n;
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=n; ++j) cin>>c[i][j];
	Find_Cmin();
	x[1]=1;
	Try(2);
	cout<<Fopt;
}

