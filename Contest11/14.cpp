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

int n, res;
map<int, node *> m;

bool isLeaf(node *t){
	if(!t) return 0;
    if(t->left==NULL && t->right==NULL) return 1;
    return 0;
}

void sumAllLeftNodes(node *t){
	if (t != NULL) {
		if (isLeaf(t->left)) {
			res+=t->left->val;
		}
		sumAllLeftNodes(t->left);	
		sumAllLeftNodes(t->right);
	}
}
void solve(){
    res = 0;
    m.clear();
    node *root = NULL;
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
    sumAllLeftNodes(root);
    cout<<res<<endl;
}

main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        solve();
    }
}
