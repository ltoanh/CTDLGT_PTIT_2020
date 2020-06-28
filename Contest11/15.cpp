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
    node(int val){
        this->val = val;
        left = right = NULL;
    }
};

int n;
node *root;
map<int, node *> m;

void init(){
    m.clear();
    root = NULL;
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
		m[v] = child; m[u] = parent;
        if(dir == 'L') parent->left = child;
        else parent->right = child;
    }
}

bool isLeaf(node *t){
    if(t->left==NULL && t->right==NULL) return 1;
    return 0;
}
int sumRightNodes(node *t){
    if(t==NULL) return 0;
    if(t->right && isLeaf(t->right)) 
		return t->right->val + sumRightNodes(t->left);
    return sumRightNodes(t->left) + sumRightNodes(t->right);
}

int solve(){
    init();
    return sumRightNodes(root); 
}

main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        cout<<solve()<<endl;
    }
}
