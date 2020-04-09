#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ull unsigned long long
#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first

const int MAX=1e+5;
using namespace std;

int t, n;

main(){
	cin>>t;
	while(t--){
		cin>>n;
		int dem=0;
		for(int i=1; i*i<=n; i++){
			if(n%i==0 && i%2==0){
				dem++;
			}
			int j=n/i;
			if(j==i) continue;
			if(j%2==0 && n%j==0){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}

