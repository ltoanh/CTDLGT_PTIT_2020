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
ll res[107];
bool vis[107]={0};
void findNum(){
	memset(res, 0, sizeof(res));
	queue<ll> q; 
	q.push(9);
	int d=1;
	while(d<=100){
		ll n1=q.front(); q.pop();
		for(int i=1; i<=n1 && i<=100; ++i){
			if(vis[i]==0 && n1%i==0){
				res[i]=n1;
				vis[i]=1;
				d++;
			}
		}
		q.push(n1*10);
		q.push(n1*10+9);
	} 
}
main(){
	findNum();
	cin>>t;
	while(t--){
		cin>>n;
		cout<<res[n]<<endl;
	}
}

