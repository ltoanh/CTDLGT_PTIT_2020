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

int n, k, s, d;
int a[30];

void Find(){
	int sum=0;
	for(int i=1; i<=k; ++i){
		sum+=a[i];
	}
	if(sum==s) d++;
}
void Try(int i){
	for(int j=a[i-1]+1; j<=n-k+i; ++j){
		a[i]=j;
		if(i==k) Find();
		else Try(i+1);
	}
}
int main(){
	while(1){
		d=0;
		cin>>n>>k>>s;
		if(n==0 && k==0 && s==0) return 0;
		Try(1);
		cout<<d<<endl;
	}
	return 0;
}

