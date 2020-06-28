#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define ii pair<int, int>
#define vii vector<ii>
#define vi vector<int>
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
map<int, node *> m;
node *root;

void init(){
	node *parent, *child;
    for(int i=1; i<=n; ++i){
        char dir;
        int u, v;
        cin>>u>>v>>dir;
        if(m.find(u) == m.end()){ // khong tim thay node
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
//tim level cua cac node la
void dfs(node *tmp, set<int> &s, int h){
    if(tmp==NULL) return;
    if(tmp->left==NULL && tmp->right==NULL) s.insert(h);
    dfs(tmp->left, s, h+1);
    dfs(tmp->right, s, h+1);
}

bool check(node *tmp){
    set<int> s;
    dfs(tmp, s, 0);
    if(s.size()>1) return 0; //cac la co level khac nhau
    return 1;
}
bool solve(){
    root=NULL;
    init();
    return check(root);
}

main(){
    int t;
    cin >> t;
    while (t--)
    {
        m.clear();
        cin >> n;
        cout<<solve()<<endl;
    }
}
