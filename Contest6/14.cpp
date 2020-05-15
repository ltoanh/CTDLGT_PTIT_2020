#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e6 + 7;
const int mod = 1e9 + 7;

using namespace std;

int n;
int a[MAX];

void isPrime(){
	memset(a, 0, sizeof(a));
	a[0] = a[1] = 1;
	for(int i = 2; i*i <= MAX; ++i){
		if(a[i] == 0){
			for(int j = i * i; j <= MAX; j += i) a[j] = 1;
		}
	}
}

int main() {
	isPrime();
	int t;
	cin>>t;
	while (t--) {
		cin >> n;
		bool check = 0;
		for(int i = 2; i <= n/2; ++i){
			if(a[i] == 0 && a[n-i] == 0){
				check = 1;
				cout<<i<<" "<<n-i;
				break;
			}
		}
		if(!check) cout<<-1;
		cout<<endl;
	}
}
