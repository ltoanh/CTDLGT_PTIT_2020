//wr
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
vi snt, Prime;
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

void Try(int i, int sum, vi ans){
	if(sum>s) return;
	if(s==sum && ans.size()==n){
		res.pb(ans);
		return;
	}
	for(int j=i; j<Prime.size(); ++j){
		if(sum+Prime[j]<=s && ans.size()<n){
			ans.pb(Prime[j]);
			Try(i+1, sum+Prime[j], ans);
			ans.pop_back();
		}
	}
}


main(){
	Snt();
//	for(int i=0; i<Prime.size(); ++i) cout<<i<<":"<<Prime[i]<<endl;
	cin>>t;
	while(t--){
		res.clear();
		cin>>s>>p>>n;
		vi ans;
		int vt=find(Prime.begin(), Prime.end(), p)-Prime.begin();
		cout<<vt<<endl;
		Try(vt+1, 0, ans);
	}
	cout<<res.size()<<endl;
}

