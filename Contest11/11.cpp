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

int findDepth(node *t){
    int d = 0;
    while(t){
        d++;
        t=t->left;
    }
    return d;
}

bool isPerfect(node *t, int d, int level){
    if(t == NULL) return d == level;
    return isPerfect(t->left, d, level+1) && isPerfect(t->right, d, level+1);
}

bool solve(){
    init(); 
    int d = findDepth(root);
    return isPerfect(root, d, 0);
}
main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        cout<<(solve()?"Yes":"No")<<endl;
    }
}
