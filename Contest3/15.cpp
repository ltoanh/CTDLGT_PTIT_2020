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
const int MAX=1e+5;

using namespace std;
int t, n, s, m;

int solve(){
	if(n<m) return -1;
	int soNgay=0, i=1;
	while(i<1000 && soNgay<s){
		soNgay=n*i/m;
		i++;
	}
	return i-1;
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>s>>m;
		cout<<solve()<<endl;
	}
}

