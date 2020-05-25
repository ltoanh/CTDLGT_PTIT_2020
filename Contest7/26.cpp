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
int a[MAX];

main(){
	cin>>n;
	for(int i=0; i<n; ++i) cin>>a[i];
	stack<int> res; res.push(1);
	stack<int> value; value.push(a[0]);
	cout<<1<<" ";
	for(int i=1; i<n; ++i){
		int num=1;
		while(!value.empty() && a[i]>=value.top()){
			num+=res.top(); res.pop();
			value.pop();
		}
		cout<<num<<" ";
		res.push(num); value.push(a[i]);
	}
}

