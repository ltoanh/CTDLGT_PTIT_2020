#include<bits/stdc++.h>

using namespace std;

int t, n, m;
int d[1007], G[1007][1007];

//bellman-ford
int solve(){
    d[1]=0;
    for(int k=2; k<=n; ++k)
        for(int i=1; i<=n; ++i)
            for(int j=1; j<=n; ++j){
                int tmp=d[i]+G[i][j];
                if(d[j]>tmp) d[j]=tmp;
            }
    for(int i=1; i<=n; ++i)
        for(int j=1; j<=n; ++j){
            int tmp=d[i]+G[i][j];
            if(d[j]>tmp) return 1;
        }
    return 0;
}

main(){
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1; i<=n; ++i){
            d[i]=1e7;
            for(int j=1; j<=n; ++j) G[i][j]=1e7;
        }
        int x, y, w;
        for(int i=1; i<=m; ++i){
            cin>>x>>y>>w;
            G[x][y]=w;
        }
        cout<<solve()<<endl;
    }
}
