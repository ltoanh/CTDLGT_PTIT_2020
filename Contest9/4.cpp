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

int n;
string s;

main(){
	cin>>n;
	cin.ignore();
	vector< vi > a(n+7, vi(n+7,0));
	for(int i=1; i<=n; ++i){
		string s;
		getline(cin, s);
		for(int j=0; j<s.size(); j++){
			int x=0;
			while(isdigit(s[j])){
				x=x*10+(s[j]-'0');
				j++;
			}
			a[i][x]++;
		}
	}
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}

