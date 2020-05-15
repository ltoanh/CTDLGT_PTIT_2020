#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e6 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, n, k;
int a[MAX];

main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i = 0 ; i < n; ++i) cin>>a[i];
		sort(a, a+n);
		if(binary_search(a, a + n, k)) cout<<1;
		else cout<<-1;
		cout<<endl;
	}
}

