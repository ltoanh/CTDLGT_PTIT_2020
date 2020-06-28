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
    m.clear();
    root = NULL;
    while(n--){
        int u, v;
        char dir;
        node *parent, *child;
        cin>>u>>v>>dir;
        if(m.find(u) == m.end()){
            parent = new node(u);
            if(root==NULL) root = parent;
        }
        else{
            parent = m[u];
        }
        child = new node(v);
        m[v] = child; m[u] = parent;
        if(dir=='L') parent->left = child;
        else parent->right = child;
    }
}
int sumNode(node *t){
    if(t==NULL) return 0;
    return sumNode(t->left) + t->val + sumNode(t->right);
}

bool isSumTree(node *t){
    if(t==NULL || (t->left==NULL && t->right==NULL)) return 1;
    int leftSum = sumNode(t->left);
    int rightSum = sumNode(t->right);
    if((t->val == leftSum + rightSum) && isSumTree(t->left) && isSumTree(t->right))
        return 1;
    return 0;
}

bool solve(){
    init();
    return isSumTree(root);
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        cout<<solve()<<endl;
    }
}
