#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second

const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

int n;

bool solve(){
    int a[1007];
    for(int i=1; i<=n; ++i) cin>>a[i];
    for(int i=2; i<=n; ++i){
        if(a[i-1]>=a[i]) return 0;
    }
    return 1;
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        cout<<solve()<<endl;
    }
}