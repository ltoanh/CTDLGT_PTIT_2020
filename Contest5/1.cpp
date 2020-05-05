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

main(){
	int t;
	cin>>t;
	while(t--){
        string a, b;
		cin>>a>>b;
        int m = a.size(), n = b.size();
        a = ' ' + a;
        b = ' ' + b;
        vector< vector<int> > f(m+1, vector<int>(n+1, 0));
        for (int i=1; i<=m; i++){
            for (int j=1; j<=n; j++) {
                if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
                else f[i][j] = max(f[i-1][j], f[i][j-1]);
            }
        }
		cout<<f[m][n]<<endl;
	}
}

