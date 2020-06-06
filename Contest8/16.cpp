#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define vii vector< ii >
#define vi vector< int >
#define pb push_back

const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

struct ii{
	vi F;
	int S;
};

int x;
vi s1, s2;

bool cmp(vi a, vi b){
	for(int i=1; i<=6; ++i){
		if(a[i]!=b[i]) return 0;
	}
	return 1;
}
main(){
	s1.pb(0); s2.pb(0);
	for(int i=1; i<=6; ++i)	{
		cin>>x;
		s1.pb(x);
	}
	for(int i=1; i<=6; ++i)	{
		cin>>x;
		s2.pb(x);
	}
	int Fopt=0;
	queue<ii> f;
	f.push({s1,0});
	while(!f.empty()){
		ii ans=f.front(); f.pop();
		if(cmp(ans.F, s2)){
			Fopt=ans.S;
			break;
		}
		vi t1, t2;
		t1.pb(0); t2.pb(0);
		t1.pb(ans.F[4]); t1.pb(ans.F[1]); t1.pb(ans.F[3]); t1.pb(ans.F[5]); t1.pb(ans.F[2]); t1.pb(ans.F[6]); 
		t2.pb(ans.F[1]); t2.pb(ans.F[5]); t2.pb(ans.F[2]); t2.pb(ans.F[4]); t2.pb(ans.F[6]); t2.pb(ans.F[3]); 
		f.push({t1, ans.S+1});
		f.push({t2, ans.S+1});
	}
	cout<<Fopt;
}

