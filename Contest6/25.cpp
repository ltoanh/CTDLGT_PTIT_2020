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

int t, n, a;

main(){
	cin>>t;
	while(t--){
		set<int> s;
		cin>>n;
		for(int i = 0; i < n; ++i){
			cin>>a;
			s.insert(a);
		}
		if(s.size() < 2) cout<<-1;
		else{
			set<int>::iterator it = s.begin();
			cout<<*it<<" ";
			it++;
			cout<<*it;
		}
		cout<<endl;
	}
}

