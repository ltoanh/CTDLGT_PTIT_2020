#include<iostream>
#include<math.h>
#define ll long long
using namespace std;

int t, n, m;
int a[107][107];

int Solve(int n, int m){
    if(n==1 || m==1) return 1;
    return Solve(n-1, m)+Solve(n,m-1);
}
main(){
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1; i<=n; ++i)
            for(int j=1; j<=m; ++j) cin>>a[i][j];
        cout<<Solve(n,m)<<endl;
    }
}
