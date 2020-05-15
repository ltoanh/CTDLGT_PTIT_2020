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

int n, a[107];
int step = 0;

void print(int n){
	cout<<"Buoc "<<step<<": ";
	for(int i = 1; i <= n; ++i) cout<<a[i]<<" ";
	cout<<endl;
}

void insertionSort(){
	for(int i = 1; i <= n; ++i){
		int j = i;
		while(j > 0 && a[j-1] > a[j]){
			swap(a[j], a[j-1]);
			j--;
		}
		print(i); step++;
	}
}

main(){
	cin>>n;
	for(int i = 1; i <= n; ++i) cin>>a[i];
	insertionSort();
}

