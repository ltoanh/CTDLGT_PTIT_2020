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
int t, n, s, p;
int a[207];
vi snt, Prime, ans;
vector< vi > res;
int pri[100]={
	2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
	31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
	73,79,83,89,97,101,103,107,109,113,
	127,131,137,139,149,151,157,163,167,173,
	179,181,191,193,197,199
};
void Snt(){
	for(int i=0; i<46; ++i){
		Prime.pb(pri[i]);
	}
}

void Try(int i, int sum, int sl){
	if(sum>s || sl>n) return;
	if(s==sum && sl==n){
		res.pb(ans);
		return;
	}
	for(int j=i; j<Prime.size(); ++j){
        ans.pb(Prime[j]);
        Try(j+1, sum+Prime[j], sl+1);
        ans.pop_back();
	}
}

main(){
	Snt();
	cin>>t;
	while(t--){
		res.clear(); ans.clear();
		cin>>n>>p>>s;
		int vt=find(Prime.begin(), Prime.end(), p)-Prime.begin();
		Try(vt, 0, 0);
		cout<<res.size()<<endl;
		for(int i=0; i<res.size(); ++i){
            for(int j=0; j<res[i].size(); ++j) cout<<res[i][j]<<" ";
            cout<<endl;
		}
	}
}

