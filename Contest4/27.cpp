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

int t;
ll n, l, r;

ll findLenght(ll n){
	if(n<=1) return 1;
	ll ans=findLenght(n/2);
	return ans*2+1;
}
ll countBit(ll left, ll right, ll n){
	if(left>r || right<l) return 0;
	if(l<=left && right<=r) return n;
	ll mid=(left+right)/2;
	if(l<=mid && mid<=r)
		return countBit(left, mid-1, n/2)+countBit(mid+1, right, n/2)+n%2;
	return countBit(left, mid-1, n/2)+countBit(mid+1, right, n/2);
		
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>l>>r;
		ll len=findLenght(n);
		cout<<countBit(1,len,n)<<endl;
	}
}
