#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ull unsigned long long
#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first

const int MAX=1e+5;
using namespace std;

int t;
string s;

main(){
	getline(cin, s);
	int a=s[0]-'0', b=s[4]-'0', c=s[8]-'0';
	cout<<(a+b==c?"YES":"NO")<<endl;
}

