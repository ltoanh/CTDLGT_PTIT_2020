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

struct node{
    int val;
    node *left, *right;
    node(int data){
        this->val = data;
        left = right = NULL;
    }
};

int n;
node *root;
map<int, node *> m;

void init(){
    root = NULL;
    m.clear();
    while(n--){
        node *parent, *child;
        int u, v;
        char dir;
        cin>>u>>v>>dir;
        if(m.find(u) == m.end()){
            parent = new node(u);
            if(root == NULL) root = parent;
        }
        else{
            parent = m[u];
        }
        child = new node(v);
        m[v] = child, m[u] = parent;
        if(dir == 'L') parent->left = child;
        else parent->right = child;
    }
}

bool isFullTree(node *t){
    if(t == NULL || (t->left==NULL && t->right==NULL)) return 1;
    if(t->left==NULL || t->right == NULL) return 0;
    return isFullTree(t->left) && isFullTree(t->right);
}

bool solve(){
    init(); 
    return isFullTree(root);
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        cout<<(solve())<<endl;
    }
}
