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

struct arr{
	int value, index;
};

int t, n, k;
arr a[MAX];

bool cmp(arr x, arr y){
	int p = abs(k - x.value), q = abs(k - y.value);
	if(p == q) return x.index < y.index;
	return p < q;
}

main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i = 0; i < n; ++i){
			int x; cin>>x;
			a[i].value = x;
			a[i].index = i;
		}
		sort(a, a + n, cmp);
		for(int i = 0; i < n; ++i){
			cout<<a[i].value<<" ";
		}
		cout<<endl;
	}
}

