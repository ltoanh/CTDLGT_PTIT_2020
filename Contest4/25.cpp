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

int t, n;
ll Fibo[100], k;

void Init(){
	Fibo[1]=Fibo[2]=1;
	for(int i=3; i<93; ++i) Fibo[i]=Fibo[i-2]+Fibo[i-1];	
}

char findChar(int n, ll k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k>Fibo[n-2]) 
		return findChar(n-1, k-Fibo[n-2]);
	return findChar(n-2, k);
}
main(){
	Init();
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<findChar(n,k)<<endl;
	}
}

