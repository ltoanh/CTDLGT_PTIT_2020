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
string a;

main(){
	cin>>t;
	while(t--){
		cin>>n;
		vi count(10, 0);
		while(n--){
			cin>>a;
			for(int i = 0; i < a.size(); ++i){
				count[a[i] - '0']++;
			}
		}
		for(int i = 0; i < 10; ++i){
			if(count[i] > 0) cout<<i<<" ";
		}
		cout<<endl;
	}
}

