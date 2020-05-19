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

int t, n, a[30], k;
string s;
vector<string> res;

void init(int x){
	for(int i=1; i<=x; ++i) a[i]=i;
}
void Push(){
	string ans="";
    for(int i=1; i<=k; ++i){
    	ans+=(a[i]-1)+'a';
	}
    res.pb(ans);
}

void Try(int i){
    if(i>k){
        Push();
        return;
    }
    for(int j=a[i-1]+1; j<=n-k+i; ++j){
        a[i]=j;
        Try(i+1);
    }
}

main(){
	cin>>t;
	while(t--){
		res.clear();
		cin>>n>>s;
		int i=1;
		while(i<=n){
			k = i;
			init(k);
			Try(1);
			i++;
		}
		sort(res.begin(), res.end());
		for(int i=0; i<res.size(); ++i) cout<<res[i]<<" ";
		cout<<endl;
	}
}

