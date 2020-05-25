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

string s;
stack<char> brak;
stack<int> index;
vii pos;
vector<string> res;
int a[17]={0}, n;
//ktra da xuat hien trong res?
bool check(string ans){
	string tmp = ans;
	reverse(ans.begin(), ans.end());
	for(int i=0; i<res.size(); ++i){
		if(ans == res[i] || tmp == res[i]) return 0;
	}
	return 1;
}
void Push(){
	bool fl=0;
	int b[207];
	memset(b, 0, sizeof(b));
	string ans="";
	for(int i=0; i<n; ++i){
		if(a[i]==1){
			fl=1;
			b[pos[i].F] = b[pos[i].S] = 1;
		}
	}
	if(!fl) return;
	for(int i=0; i<s.size(); ++i){
		if(b[i]) continue;
		ans+=s[i];
	}
	if(check(ans)) res.pb(ans);
}
void Try(int i){
	if(i>=n){
		Push();
		return;
	}
	for(int j=0; j<=1; ++j){
		a[i]=j;
		Try(i+1);
	}
}
main(){
	cin>>s;
	// luu vi tri cac cap ( )
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='('){
			brak.push(s[i]);
			index.push(i);
		}
		else if(s[i]==')'){
			if(!brak.empty() && !index.empty()){
				pos.pb({index.top(), i});
				index.pop(); brak.pop();
			}	
		}
	}	
	//QLNP vii pos
	n = pos.size();
	Try(0);
	sort(res.begin(), res.end());
	for(int i=0; i<res.size(); ++i) cout<<res[i]<<endl;
}

