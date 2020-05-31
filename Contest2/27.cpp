#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, n, k, s;
int a[30];

int solve(){
	int f[30];
	memset(f, 0, sizeof(f));
	f[0]=1;
	if(s%k) return 0;
	int S=s/k;
	for(int i=1; i<=n; ++i){
		for(int j=S; j>=a[i]; --j){
			if(f[j-a[i]]){
				if(j==S) f[S]++;
				else f[j]=1;
			}
		}
	}
	return f[S]==k;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		s=0;
		for(int i=1; i<=n; ++i){
			cin>>a[i];
			s+=a[i];
		}
		cout<<solve()<<endl;
	}
}

