#include<bits/stdc++.h>
#define ll long long
const int MAX=1e6+7;
using namespace std;
int t, n1, n2, n3;
ll a[MAX], b[MAX], c[MAX];

main(){
	cin>>t;
	while(t--){
		cin>>n1>>n2>>n3;
		for(int i=0; i<n1; ++i){
			cin>>a[i];
		}
		for(int i=0; i<n2; ++i){
			cin>>b[i];
		}
		for(int i=0; i<n3; ++i){
			cin>>c[i];
		}
		bool fl=0;
		int i=0, j=0, k=0;
		while (i < n1 && j < n2 && k < n3) { 
			if (a[i] == b[j] && b[j] == c[k]){
				fl=1;
				cout << a[i] << " ";   i++; j++; k++;
			} 
			else if (a[i] < b[j]) i++;  
			else if (b[j] < c[k]) j++; 
			else k++; 
    	} 
		if(fl==0) cout<<-1;
		cout<<endl;
	}
}

