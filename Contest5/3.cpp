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
int n, s;
int a[207];

main(){
	cin>>t;
	while(t--){
		cin>>n>>s;
		for(int i=1; i<=n; ++i) cin>>a[i];
		int f[40007]={0};
		f[0]=1;
		for(int i=1; i<=n; ++i){
			for(int j=s; j>=a[i]; --j){
				if(f[j]==0 && f[j-a[i]]==1) f[j]=1;
			}
		}
		cout<<(f[s]?"YES":"NO")<<endl;
	}
}

