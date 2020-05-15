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

void merge(int l, int m, int r){
	int i, j, k;
	int n1 = m - l + 1, n2 = r - m;
	
	int L[n1], R[n2];
	for(int i = 0; i < n1; ++i) L[i] = a[l + i];
	for(int i = 0; i < n2; ++i) R[i] = a[m + 1 + i];
	
	i = j = 0; k = l;
	while(i < n1 && j < n2){
		if(L[i] <= R[j]){
			a[k] = L[i];
			i++;
		}
		else{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < n1){
		a[k] = L[i];
		i++; k++;
	}
	while(j < n2){
		a[k] = R[j];
		j++; k++;
	}
}

void mergeSort(int l, int r){
	if(l < r){
		int m = l + (r - l) / 2;
		mergeSort(l, m);
		mergeSort(m+1, r);
		merge(l, m, r);
	}	
}

main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i = 0; i < n; ++i) cin>>a[i];
		mergeSort(0, n - 1);
		for(int i = 0; i < n; ++i) cout<<a[i]<<" ";
		cout<<endl;
	}
}

