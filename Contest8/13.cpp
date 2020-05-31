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

int t;
string L, R;
vector<string> res;

bool checkValue(string x){
	bool a[10]={0};
	for(int i=0; i<x.size(); ++i){
		if(a[x[i]-'0']) return 0;
		else if(x[i]-'0' > 5) return 0;
		else a[x[i]-'0']=1;
	}
	return 1;
}
void init(){
	queue<string> q;
	q.push("1"); q.push("2"); q.push("3"); q.push("4"); q.push("5");
	res.pb("0");
	while(!q.empty()){
		string s=q.front(); q.pop();
		if(checkValue(s)) res.pb(s);
		//MAX value 543210 -> max size = 6;
		if(s.size()==6) continue;
		for(int i=0; i<=5; ++i){
			string ans="";
			ans+=(i+'0');
			q.push(s+ans);
		}
	}
}
bool cmp(string a, string b){
	if(a.size()==b.size()) return a<b;
	return a.size()<b.size();
}
int solve(){
	int d=0;
	for(int i=0; i<res.size(); ++i){
		if(res[i]==L || res[i]==R || (cmp(L, res[i]) && cmp(res[i], R))){
			d++;
		}
	}
	return d;
}
main(){
	init();
	cin>>t;
	while(t--){
		cin>>L>>R;
		cout<<solve()<<endl;
	}
}

