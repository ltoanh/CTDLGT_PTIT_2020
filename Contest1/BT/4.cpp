#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first
const int MAX=1e+5;
using namespace std;
int t;
ll n;

main(){
	cin>>t;
	FOR(i,1,t){
		cin>>n;
		cout<<"Test "<<i<<": ";
		for(ll i=2; i<=sqrt(n); ++i){
			ll sl=0;
			if(n%i==0){
				while(n%i==0){
				n/=i;
				sl++;
				}	
				cout<<i<<"("<<sl<<")"<<" ";
			}
		}
		if(n>1) cout<<n<<"("<<1<<")";
		cout<<endl;
	}
}

