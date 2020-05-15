//wr
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

int t, n, k;
int a[1007];

bool cmp(int x, int y){
	return x > y;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i = 0; i < n; ++i) cin>>a[i];
		sort(a, a + n, cmp);
		for(int i = 0; i < k; ++i) cout<<a[i]<<" ";
		cout<<endl;
	}
}

