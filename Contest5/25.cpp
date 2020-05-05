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
int n;
ll C[50][50];

void Solve(){
	memset(C, 0, sizeof(C));
	for(int i=0; i<=50; ++i){
		for(int j=0; j<=i; ++j){
			if(j==0 || i==j) C[i][j]=1; 
			else C[i][j] = (C[i-1][j-1] + C[i-1][j]);
		}
	}
} 
main(){
	Solve();
	cin>>t;
	while(t--){
		cin>>n;
		ll res=0;
		for(int i=0; i<=n; ++i){
			int b=(n-i)/2;
			for(int j=0; j<=b; ++j){
				int c=(n-j)/3;
				for(int k=0; k<=c; ++k){
					if(i+2*j+3*k==n){
						int ans=i+j+k;
						res+=C[ans][i]*C[ans-i][j]*C[ans-i-j][k];	
					}
				} //end of k
			} // end of j
		} //end of i
		cout<<res<<endl;
	}
}

