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

int t, x, n;
int a[27];
vector<int> res;
bool fl=0;
void Print(){
	fl=1;
	cout<<"[";
	for(int i=0; i<res.size()-1; ++i) cout<<res[i]<<" ";
	cout<<res[res.size()-1]<<"] ";
}
void Try(int i, int s){
	if(s<0) return;
	if(s==0){
		Print();
		return;
	}
	while(s-a[i]>=0 && i<n){
		res.pb(a[i]);
		Try(i, s-a[i]);
		i++;
		res.pop_back();
	}
}
main(){
	cin>>t;
	while(t--){
		res.clear();
		cin>>n>>x;
		for(int i=0; i<n; ++i) cin>>a[i];
		sort(a, a+n);
		Try(0, x);
		if(!fl) cout<<-1;
		cout<<endl;
	}
}

