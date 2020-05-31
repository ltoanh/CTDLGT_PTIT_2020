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

int t;
ll n;

int solve(){
	queue<ll> q;
	q.push(1);
	int res=0;
	ll ans;
	while(1){
		ans=q.front(); q.pop();
		if(ans<=n){
			res++;
			q.push(ans*10);
			q.push(ans*10+1);
		}
		else return res;
	}
	return res;
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		cout<<solve()<<endl;
	}
}

