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

int t, n;
vector<string> res;

bool cmp(string a, string b){
	if(a.size()==b.size()) return a<b;
	return a.size()<b.size();
}

void init(){
	queue<string> q;
	q.push("44");
	q.push("55");
	while(!q.empty() && res.size()<=10007){
		string s=q.front(); q.pop();
		res.pb(s);
		q.push("4"+s+"4");
		q.push("5"+s+"5");
	}
	sort(res.begin(), res.end(), cmp);
}
main(){
	cin>>t;
	init();
	while(t--){
		cin>>n;
		for(int i=0; i<n; ++i) cout<<res[i]<<" ";
		cout<<endl;
	}
}

