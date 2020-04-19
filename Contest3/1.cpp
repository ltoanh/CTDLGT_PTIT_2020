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

int t, n;
int types[17]={1000,500,200,100,50,20,10,5,2,1};

main(){
	cin>>t;
	while(t--){
		int ans=0;
		cin>>n;
		for(int i=0; i<10, n>0; ++i){
			ans+=n/types[i];
			n%=types[i];	
		}
		cout<<ans<<endl;
	}
}

