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
int f[107][107][107];

main(){
	int t;
	cin>>t;
	while(t--){
        string a, b, c;
        int m, n, p;
        cin>>m>>n>>p;
		cin>>a>>b>>c;
        a = ' ' + a;
        b = ' ' + b;
        c = ' ' + c;
        memset(f, 0, sizeof(f));
        for (int i=1; i<=m; i++){
            for (int j=1; j<=n; j++) {
            	for(int k=1; k<=p; ++k){
            		if (a[i] == b[j] && a[i]==c[k]) f[i][j][k] = f[i-1][j-1][k-1] + 1;
                	else f[i][j][k] = max(f[i-1][j][k], max(f[i][j-1][k], f[i][j][k-1]));	
				}
            }
        }
		cout<<f[m][n][p]<<endl;
	}
}

