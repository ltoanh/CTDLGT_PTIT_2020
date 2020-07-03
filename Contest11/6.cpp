//RE

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

struct node{
    int val;
    node *left, *right;
    node(int data){
        this->val = data;
        left = right = NULL;
    }
};

int n;
int inOr[1007], levelOr[1007], a[1007];

void postOrder(int l, int r)
{
    if (l > r) {
        return;
    } else if (l == r) {
        cout<<inOr[l]<<" ";
    } else {
        int x;
        for (int i=1; i<=n; ++i)
        {
            if (a[levelOr[i]] >= l && a[levelOr[i]] <= r) {
                x = i;
                break;
            }
        }
        x = a[levelOr[x]];
        postOrder(l, x-1);
        postOrder(x+1, r);
        cout<<inOr[x]<<" ";
    }
}


main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; ++i){
            cin>>inOr[i];
        }
        for(int i=1; i<=n; ++i){
            cin>>levelOr[i];
            a[levelOr[i]] = levelOr[i];
        }
        postOrder(INT_MIN, INT_MAX);
        cout<<endl;
    }
}
