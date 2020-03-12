#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ull unsigned long long
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define S second
#define F first

const int MAX=1e5+7;
using namespace std;

int t, n, x;
bool cmp(pair< int, pii > x, pair< int, pii > y){
    if(x.S.F==y.S.F) return x.S.S<y.S.S;
    return x.S.F>y.S.F;
}
void Solve(){
    map< int, pii > a;
    FOR(i,1,n){
    	cin>>x;
        a[x].F++;
        if(a[x].S==0) a[x].S=i;
    }
    vector< pair< int,pii > >res;
	map< int, pair<int, int> >::iterator it;
	for(it=a.begin(); it!=a.end(); ++it){
		res.push_back({it->F,it->S});
	}
	sort(res.begin(), res.end(), cmp);
    FOR(i,0,res.size()-1){
        for(int j=0; j<res[i].S.F; ++j) cout<<res[i].F<<" ";
    }
    cout<<endl;
}

main(){
	cin>>t;
	while(t--){
	    cin>>n;
	    Solve();
	}
}

