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

int t, s, d;
int res[1007];

bool solve(){
	if(s>9*d) return 0;
	s--;
	for(int i=d-1; i>0; --i){
		if(s>9){
			res[i]=9;
			s-=9;
		}
		else{
			res[i]=s;
			s=0;
		}
	}
	res[0]=s+1;
	return 1;
}
main(){
	cin>>t;
	while(t--){
		cin>>s>>d;
		if(solve()) for(int i=0; i<d; ++i) cout<<res[i];
		else cout<<-1;
		cout<<endl;
	} 
}

