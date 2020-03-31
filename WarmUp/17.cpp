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

ll t, n;
ll res[505];
bool vis[505]={0};

void Solve(){
	int d=0;
	queue<ll> B;
	B.push(9);
	while(d<500){
		ll ans=B.front(); B.pop();
		for(int i=1; i<=ans && i<=500; ++i){
			if(ans%i==0 && !vis[i]){
				vis[i]=1;
				res[i]=ans;
				d++;
			}
		}
		B.push(ans*10);
		B.push(ans*10+9);
	}	
}
main(){
	cin>>t;
	Solve();
	while(t--){
		cin>>n;
		cout<<res[n]<<endl;
	}
}

