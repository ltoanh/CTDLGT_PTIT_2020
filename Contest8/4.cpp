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

int t, k;
string s;

main(){
	cin>>t;
	while(t--){
		int a[30];
		priority_queue<int> q;
		memset(a, 0, sizeof(a));
		cin>>k>>s;
		for(int i=0; i<s.size(); ++i){
			a[s[i]-'A']++;
		}
		for(int i='A'; i<='Z'; ++i){
			if(a[i-'A']) q.push(a[i-'A']);
		}
		while(!q.empty() && k--){
			int ans=q.top()-1; q.pop();
			q.push(ans);
		}
		ll res=0;
		while(!q.empty()){
			int ans=q.top(); q.pop();
			res+=1LL*ans*ans;
		}
		cout<<res<<endl;
	}
}

