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

int t, n, m;
int a[MAX], b[MAX];

void quickSort(int a[], int l, int r){
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
	if( l < j) quickSort(a, l, j);
	if( i < r) quickSort(a, i, r);
}
main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i = 1; i <= n; ++i) cin>>a[i];
		quickSort(a, 1, n);
		for(int i = 1; i <= m; ++i) cin>>b[i];
		quickSort(b, 1, m);
		cout<<(ll)a[n]*b[1]<<endl;
	}
}

