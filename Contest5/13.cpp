#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e4+7;

using namespace std;
int t, n;
ull ugly[MAX];

void findUgly(){
	int i2=0, i3=0, i5=0;
	ull n2, n3, n5;
	ugly[0]=1;
	for(int i=1; i<MAX; ++i){
		n2 = ugly[i2]*2;
		n3 = ugly[i3]*3;
		n5 = ugly[i5]*5;
		ugly[i] = min(n2, min(n3, n5));
		if(ugly[i]==n2) i2++;
		if(ugly[i]==n3) i3++;
		if(ugly[i]==n5) i5++;
	}
}
main(){
	findUgly();
	cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<ugly[n-1]<<endl;
	}
}

