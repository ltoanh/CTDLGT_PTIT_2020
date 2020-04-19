#include<bits/stdc++.h>

#define ll long long
using namespace std;

int t, n;
ll k;

ll findPosition(int n, ll k){
    if(k&1) return 1;
    ll mid=pow(2,n-1);
    if(k==mid) return n;
    if(k<mid) return findPosition(n-1,k);
    return findPosition(n-1,k-mid);
}
main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<findPosition(n,k)<<endl;
    }
}
