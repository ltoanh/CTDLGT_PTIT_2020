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

int t, n, k;

main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        vi a;
        for(int i = 0; i < n; ++i){
            int x; cin>>x;
            a.pb(x);
        }
        sort(a.begin(), a.end());
        ll res = 0;
        for(int i = 0; i < n - 1; ++i){
            int ans = lower_bound(a.begin() + i, a.end(), a[i] + k) - a.begin();
            res +=(ll) ans - 1 - i;
        }
        cout<<res<<endl;
    }
}
