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

int t, n, m;
vi parent[100007], child[100007];

bool solve(){
    for(int i=1; i<=n; ++i){
        for(int j=0; j<child[i].size(); ++j){
            int t1=child[i][j];
            for(int k=0; k<child[t1].size(); ++k){
                int t2=child[t1][k];
                if(find(parent[t2].begin(), parent[t2].end(), i)==parent[t2].end()) return 0;
            }
        }
    }
    return 1;
}
main(){
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1; i<=n; ++i){
            parent[i].clear();
            child[i].clear();
        }
        int x, y;
        for(int i=1; i<=m; ++i){
            cin>>x>>y;
            parent[y].pb(x); child[x].pb(y);
        }
        cout<<(solve()?"YES":"NO")<<endl;
    }
}