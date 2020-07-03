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

struct node
{
    int val;
    node *left, *right;
    node (int data)
    {
        this->val = data;
        left = right = NULL;
    }
};

int n1, n2;
node *root1, *root2;
map<int, node *> m;

node *init (int n, node *root)
{
    root = NULL;
    m.clear();
    while (n--) {
    	int u, v;
	    char dir;
	    node *parent, *child;
        cin>>u>>v>>dir;
        if (m.find(u) == m.end()) {
            parent = new node(u);
            if (root == NULL) root = parent;
        } else {
            parent = m[u];
        }
        child = new node(v); 
        m[u] = parent; m[v] = child;
        if (dir == 'L') {
        	parent->left = child;
		} else {
			parent->right = child;
		}
    }
    return root;
}

bool isTheSame(node *r1, node *r2)
{
    if (!r1 && !r2) return 1;
    if (r1 && r2) 
        return (isTheSame(r1->left, r2->left) && (r1->val == r2->val) && isTheSame(r1->right, r2->right));
    return 0;
}

main()
{
    int t; cin>>t;
    while (t--) {
        cin>>n1; 
		node *root1 = init(n1, root1);
        cin>>n2; 
		node *root2 = init(n2, root2);
        cout<<isTheSame(root1, root2)<<endl;
    }
}
