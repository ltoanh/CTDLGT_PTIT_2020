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

int n;
ll a[MAX];

main(){
	cin>>n;
	for(int i = 0; i < n; ++i) cin>>a[i];
	stable_sort(a, a + n);
	for(int i = 0; i < n; ++i) cout<<a[i]<<" ";
}

