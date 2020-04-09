//TLE
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

int t, n, k, sum;
int a[107], pos[107], Si[107];
bool fl;

void Try(int i){
	for(int j=pos[i-1]+1; j<=n-k+i; ++j){
		pos[i]=j;
		Si[i]=Si[i-1]+a[pos[i]];
		if(Si[i]==sum/2) fl=1;
		else{
			if(Si[i]<sum/2) Try(i+1);
		}
	}
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		sum=0;
		for(int i=1; i<=n; ++i){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%2) cout<<"NO";
		else{
			fl=0;
			for(int k=1; k<n; ++k){
				pos[0]=Si[0]=0;
				if(!fl) Try(1);
				else break;
			}
			if(fl) cout<<"YES";
			else cout<<"NO";
		}
		cout<<endl;
	}
}

