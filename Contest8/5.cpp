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

main(){
	cin>>t;
	while(t--){
		cin>>n;
		queue<string> q;
		q.push("1");
		while(n--){
			string s1=q.front(), s2=s1; q.pop();
			cout<<s1<<" ";
			q.push(s1.append("0"));
			q.push(s2.append("1"));
		}
		cout<<endl;
	}
}

