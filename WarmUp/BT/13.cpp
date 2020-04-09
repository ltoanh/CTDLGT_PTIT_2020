#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ull unsigned long long
#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first

const int MAX=1e+5;
using namespace std;

int n;

bool cmp(pair< int, pair<int, int> > x, pair< int, pair<int, int> > y){
	return x.S.S<y.S.S;	
}

bool check(int n){
    while(n){
    	int x=n%10;
    	if(x!=2 && x!=3 && x!=5 && x!=7) return 0;
    	n/=10;
	}
	return 1;
}

void Solve(){
	map< int, pair<int, int > > a;
	int index=0;
	while(cin>>n){
		index++;
		if(check(n)){
			a[n].F++;
			if(a[n].S==0) a[n].S=index;
		}
	}
	vector< pair< int, pair<int, int> > >res;
	map< int, pair<int, int> >::iterator it;
	for(it=a.begin(); it!=a.end(); ++it){
		res.push_back({it->F,it->S});
	}
	sort(res.begin(), res.end(), cmp);
	for(int i=0; i<res.size(); ++i){
		cout<<res[i].F<<" "<<res[i].S.F<<endl;
	}
}

main(){
	Solve();
}

