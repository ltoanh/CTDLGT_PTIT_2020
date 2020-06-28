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
vi pre;

void leafNodes(){
    stack<int> s;
    for(int i=0, j=1; j<n; ++i, ++j){
        bool found = 0;
        if(pre[i] > pre[j]) s.push(pre[i]);
        else{
            while(!s.empty()){
                if(pre[j]>s.top()){
                    s.pop();
                    found = 1;
                }
                else break;
            }
        }
        if(found) cout<<pre[i]<<" ";
    }
    cout<<pre[n-1]<<endl;
}

main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        pre.clear();
        for(int i=1; i<=n; ++i){
            int x; cin>>x; pre.pb(x);
        }
        leafNodes();
    }
}