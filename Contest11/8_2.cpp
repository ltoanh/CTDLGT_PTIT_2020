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

void solve(){
    root=NULL;
    init();
    stack<node *> s;
    queue<node *> q;
    q.push(root);
    while(!q.empty()){
        root = q.front(); q.pop();
        s.push(root);
        //right before left
        if(root->right) q.push(root->right);
        if(root->left) q.push(root->left);
    }
    while(!s.empty()){
        root =s.top(); s.pop();
        cout<<root->val<<" ";
    }
    cout<<endl;
}

main(){
    int t;
    cin >> t;
    while (t--)
    {
        m.clear();
        cin >> n;
        solve();
    }
}