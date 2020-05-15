#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e3 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, n, a;

main(){
	cin>>t;
	while(t--){
		set<int> b;
		cin>>n;
		for(int i = 1; i <= n; ++i){
			cin>>a;
			b.insert(a);
		}
		set<int>::iterator  it = b.begin();
		int res[MAX], i = 1;
		for(it = b.begin(); it!=b.end(); ++it){
			res[i++] = *it;
		}
		cout<<res[i-1] - res[1] + 1 - b.size()<<endl;
	}
}

