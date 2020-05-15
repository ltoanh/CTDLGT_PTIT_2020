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

int t, n;
int a[1007];

main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i = 0; i < n; ++i) cin>>a[i];
		int m = a[0] + a[1];
		for(int i = 0; i < n - 1; ++i){
			for(int j = i + 1; j < n; ++j){
				int ans = a[i] + a[j];
				if(abs(ans) < abs(m)){
					m = ans;
				}
			}
		}
		cout<<m<<endl;
	}
}

