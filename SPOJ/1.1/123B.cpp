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

int t=1;
int n, a[27];

bool Check(){
	for(int i=1; i<n; ++i){
		if(a[i]!=a[i+1]) return 0;
	}
	return 1;
}

//void Print(){
//	for(int i=1; i<=n; ++i) cout<<a[i]<<" ";
//	cout<<endl;
//}
int Solve(){
	int sl=1000, d=1;
	if(Check()) return 0; // day ban dau: 1 1 1 
	while(sl--){
		bool flag=0;
		int ans=a[1];
		for(int i=1; i<=n; ++i){
			if(i==n) a[i]=abs(a[i]-ans);
			else a[i]=abs(a[i]-a[i+1]);
		}
		if(Check()) return d;
//		Print();
		d++;
	}
	return -1;
}
int main(){
	while(1){		
		cin>>n;
		if(n==0) return 0;
		for(int i=1; i<=n; ++i) cin>>a[i];
		cout<<"Case "<<t<<": ";
		int res=Solve();
		if(res<0) cout<<"not attained";
		else cout<<res<<" iterations";
		cout<<endl;
		t++;
	}
	return 0;
}

