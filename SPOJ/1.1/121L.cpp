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

int bor=0, a,b,c,d,e,f;
ll dt=0;
vii s;

bool Check(){
	int ans=sqrt(dt);
	if(ans*ans==dt){
		bor=ans; return 1;
	}
	return 0;
}
bool Solve(){
	if(Check()==0) return 0;
	if(a>b) swap(a,b);
	if(c>d) swap(c,d);
	if(e>f) swap(e,f);
	int y=bor;
	if(b==d && d==f && f==y) return 1;
	else
	{
		if(d==y) {swap(a,c); swap(b,d);}
		if(f==y) {swap(a,e); swap(b,f);}
		if(b==y)
		{
			a=y-a;
			if((c==a && e==a) || (d==a && e==a)|| (c==a && f==a) || (d==a && f==a))  return 1;
			return 0;
		}		
		return 0;
	}
}

main(){
	cin>>a>>b>>c>>d>>e>>f;
	dt=a*b+c*d+f*e;
	Solve();	
	cout<<bor;
}

