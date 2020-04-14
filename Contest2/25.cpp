//QHD
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

int t, n;
int a[107];

bool Try(int S){
	bool dp[n+7][S+7];
	for(int i=0; i<=n; ++i) dp[i][0]=1;
	for(int i=1; i<=S; ++i) dp[0][i]=0;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=S; ++j){
			if(j<a[i-1]) dp[i][j]=dp[i-1][j];
			else dp[i][j]= dp[i-1][j] || dp[i-1][j-a[i-1]]; 
		}
	}
	return dp[n][S];
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		int sum=0;
		for(int i=1; i<=n; ++i){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%2) cout<<"NO";
		else{
			cout<<(Try(sum/2)?"YES":"NO");
		}
		cout<<endl;
	}
}

