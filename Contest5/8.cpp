/*

C[i][j] kich thuoc hinh vuong lon nhat den vi tri i, j
i = 0 -> a[i]
C[i, j] => min(C[i-1][j-1], C[i-1][j], C[i][j-1]) + 1

*/
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

int t, n, m;
int a[507][507], f[507][507];

main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=m; ++j){
				cin>>a[i][j];
			}
		}
		memset(f, 0, sizeof(f));
		for(int j=1; j<=m; ++j) f[1][j] = a[1][j];
		for(int i=1; i<=n; ++i)	f[i][1] = a[i][1];
		int Fopt = 0;
		for(int i=2; i<=n; ++i){
			for(int j=2; j<=m; ++j){
				if(a[i][j]){
					f[i][j] = min(f[i-1][j-1], min(f[i-1][j], f[i][j-1])) +1;
				}
				else f[i][j] = 0;
				Fopt = max(Fopt, f[i][j]);
			}
		}
		cout<<Fopt<<endl;
	}
}

