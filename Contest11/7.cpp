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
map< int, node * > m;
node *root;

void init(){
	node *parent, *child;
    for(int i=1; i<=n; ++i){
        char dir;
        int u, v;
        cin>>u>>v>>dir;
        if(m.find(u) == m.end()){ // khong tim thay node u
            parent = new node(u);
            m[u] = parent;
            if(root == NULL) root = parent; //neu u la node dau tien
        } 
        else{
            parent = m[u];
        }
        child = new node(v);
        m[v] = child;
        if(dir=='L') parent->left = child;
        else parent->right = child;
    }
}

//chieu cao cua cay
int heightTree(node *tmp){
    if(tmp == NULL) return 0;
    int lheight = heightTree(tmp->left);
    int rheight = heightTree(tmp->right);
    return 1 + max(lheight, rheight);
}

//in cung muc 
void printSpiral(node *root, int level, bool direct){
    if(root==NULL) return;
    if(level==1) cout<<root->val<<" ";
    else{
        if(direct){
            printSpiral(root->left, level-1, direct);
            printSpiral(root->right, level-1, direct);
        }
        else{
            printSpiral(root->right, level-1, direct);
            printSpiral(root->left, level-1, direct);
        }
    }
}

void solve(){
    root=NULL;
    init();
    int len = heightTree(root);
    bool direct = 0;
    for(int i=1; i<=len; ++i){
        printSpiral(root, i, direct);
        direct = !direct;
    }
    cout<<endl;
}

main(){
    int t; cin>>t;
    while(t--){
        m.clear();
        cin>>n;
        solve();
    }
}
