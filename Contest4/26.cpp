#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e+5;

using namespace std;

string a, b;
int k;
string res="";

void findSum(){
	int n1=a.size(), n2=b.size();
	if(n1<n2){
		swap(n1, n2);
		swap(a,b);
	}
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int d=0;
	for(int i=0; i<n2; ++i){
		int ans=(a[i]-'0')+(b[i]-'0')+d;
		res+=(ans%k+'0');
		d=ans/k;
	}
	for(int i=n2; i<n1; ++i){
		int ans=(a[i]-'0')+d;
		res+=(ans%k+'0');
		d=ans/k;
	}
	if(d>0) res+=d+'0';
	reverse(res.begin(), res.end());
	cout<<res;
}
main(){
	cin>>k>>a>>b;
	findSum();
}

