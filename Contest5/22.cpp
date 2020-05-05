#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e6+7;

using namespace std;

int t, n;
int a[MAX], add, before;

main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cin>>a[i];
		add = a[0];
		before = 0;
		for(int i=1; i<n; ++i){
			int ans = max(add, before);
			add = before + a[i];
			before = ans;
		}
		cout<<max(add, before)<<endl;
	}
}

