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

int n;
vi Inorder, Preorder;
int preIndex;

void printPostorder(int l, int r){
    if(l>r) return;
    int m = find(Inorder.begin()+l, Inorder.begin()+r, Preorder[preIndex++]) - Inorder.begin();
    printPostorder(l, m-1);
    printPostorder(m+1, r);
    cout<<Inorder[m]<<" ";
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n; 
        preIndex=0;
        int x; Inorder.clear(); Preorder.clear();
        for(int i=0; i<n; ++i){
            cin>>x; Inorder.pb(x);
        }
        for(int i=0; i<n; ++i){
            cin>>x; Preorder.pb(x);
        }
        printPostorder(0, n-1);
        cout<<endl;
    }
}