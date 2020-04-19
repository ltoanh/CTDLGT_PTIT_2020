#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e4+5;

using namespace std;

int t, n, a[MAX];

main(){
	cin>>t;
	while(t--){
		cin>>n;
		int sum=0, Fopt=INT_MIN;
		for(int i=0; i<n; ++i){
			cin>>a[i];
			sum+=a[i];
			Fopt=max(Fopt,sum);
			if(sum<0) sum=0;
		}
		cout<<Fopt<<endl;
	}
}

