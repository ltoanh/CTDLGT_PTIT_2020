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

main(){
	cin>>t;
	while(t--){
		map<int, int> m;
		int res = 0;
		cin>>n>>k;
		for(int i = 0; i < n; ++i){
			cin>>a[i];
			if(a[i] <= k) m[a[i]]++;
		}
		for(int i = 0 ; i < n; ++i){
			if(a[i] <= k){
				res += m[k - a[i]];
				if(k - a[i] == a[i]) res--;
			}
		}
		cout<<res/2<<endl;
	}
}

