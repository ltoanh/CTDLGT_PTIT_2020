/*

a[i][j]=a[i][k]+a[k][j]

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

const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

int n, m, q;
int a[107][107];

void Floy(){
    for(int k=1; k<=n; ++k){
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=n; ++j){
                if(i==k || j==k) continue;
                a[i][j]=min(a[i][j], a[i][k]+a[k][j]);
            }
        }
    }
}
main(){
    cin>>n>>m;
    int x, y, w;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
            if(i==j) a[i][i]=0;
            else a[i][j]=1e7;
        } 
    }
    for(int i=1; i<=m; ++i){
        cin>>x>>y>>w;
        a[x][y]=a[y][x]=w;
    }
    Floy();
    cin>>q;
    while(q--){
        int u, v;
        cin>>u>>v;
        cout<<a[u][v]<<endl;
    }
}