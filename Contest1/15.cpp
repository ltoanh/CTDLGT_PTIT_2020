#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first
const int MAX=1e5+7;
using namespace std;
int t, n, k;
string a;

void sHVi(){
	int i=a.size()-2;
	while(i>=0 && a[i]>=a[i+1]) i--;
	if(i<0){
		cout<<n<<" BIGGEST"; return;
	}
	int j=a.size()-1;
	while(j>i && a[j]<=a[i]) j--;
	swap(a[j], a[i]);
	int l=i+1, r=a.size()-1;
	while(l<=r){
		swap(a[l],a[r]); 
		l++; r--;
	}
	cout<<n<<" "<<a;
}

main(){
	cin>>t;
	while(t--){
		cin>>n>>a;
		sHVi(); cout<<"\n";
	}
}

