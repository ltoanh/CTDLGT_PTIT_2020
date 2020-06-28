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
vi inOr, levelOr;

//xay dung cay nhi phan 
node *constructTree(vi levelorder, int l, int r, int len){
    if(len<=0) return NULL;
    if(l>r) return NULL;
    node *root = new node(levelorder[0]);
    int m = find(inOr.begin()+l, inOr.begin()+r, levelorder[0]) - inOr.begin();
    unordered_set<int> s;
    for(int i=l; i<m; ++i) s.insert(inOr[i]);
    vi lLevel, rLevel;
    for(int i=1; i<n; ++i){
        if(s.find(levelorder[i])!=s.end()) lLevel.pb(levelorder[i]);
        else rLevel.pb(levelorder[i]);
    }
    root->left=constructTree(lLevel, l, m-1, m-l);
    root->right=constructTree(rLevel, m+1, r, r-m);
    return root;
}
//in cay Postorder
void printPostorder(node *t){
    if(t){
        printPostorder(t->left);
        printPostorder(t->right);
        cout<<t->val<<" ";  
    }
}

main(){
    int t; cin>>t;
    while(t--){
        inOr.clear(); levelOr.clear();
        int x;
        cin>>n;
        for(int i=0; i<n; ++i){
            cin>>x; inOr.pb(x);
        }
        for(int i=0; i<n; ++i){
            cin>>x; levelOr.pb(x);
        }
        node *res = constructTree(levelOr, 0, n-1, n);
        printPostorder(res);
        cout<<endl;
    }
}
