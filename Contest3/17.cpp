#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
#define MAX 256

using namespace std;

int t, n;
string s;
ull res;
int solve(){
	int fre[MAX]={0};
	if(n>=s.size()) return 0;
	for(int i=0; i<s.size(); ++i) fre[s[i]]++;
	priority_queue<int> q; 
	for(int i=0; i<MAX; ++i){
		if(fre[i]) q.push(fre[i]);
	}
	while(n--){
		int ans=q.top(); q.pop();
		ans-=1;
		q.push(ans);
	}
	while (!q.empty()) 
    { 
        int temp = q.top(); 
        res+=(ull)temp*temp; 
        q.pop(); 
    } 
    return res;
}
main(){
	cin>>t;
	while(t--){
		res=0;
		cin>>n>>s;
		cout<<solve()<<endl;
	}
}

