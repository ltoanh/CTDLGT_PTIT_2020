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

void solve(){
    init();
    vector<int> res;
    int i=0;
    queue<node *> q;
    q.push(root);
    while(!q.empty()){
    	node *t=q.front(); q.pop();
    	res.pb(t->val);
    	if(t->left) q.push(t->left);
    	if(t->right) q.push(t->right);
	}
	sort(res.begin(), res.end());
	for(int i=0; i<res.size(); ++i) cout<<res[i]<<" ";
	cout<<endl;
}

main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        solve();
    }
}
