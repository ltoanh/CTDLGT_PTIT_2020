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

int t, n;
int a[MAX];

void quickSort(int l, int r){
	int i = l, j = r;
	int pivot = a[l + (r-l)/2];
	while(i <= j){
		while(a[i] < pivot) i++;
		while(a[j] > pivot) j--;
		if(i <= j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if( l < j) quickSort(l, j);
	if( i < r) quickSort(i, r);
}
main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i = 1; i <= n; ++i) cin>>a[i];
		quickSort(1, n);
		for(int i = 1; i <= n; ++i) cout<<a[i]<<" ";
		cout<<endl;
	}
}

