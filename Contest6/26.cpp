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

int n, a[107];
int step = 0;

void print(){
	cout<<"Buoc "<<step<<": ";
	for(int i = 1; i <= n; ++i) cout<<a[i]<<" ";
	cout<<endl;
}

main(){
	cin>>n;
	for(int i = 1; i <= n; ++i) cin>>a[i];
	for(int i = 1; i < n; ++i){
		for(int j = i + 1; j <= n; ++j){
			if(a[i] > a[j]) swap(a[i], a[j]);
		}
		step++; print();
	}
}

