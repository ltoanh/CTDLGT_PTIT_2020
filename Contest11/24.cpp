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

int n, x;
vi a;

node *buildTree(int l, int r)
{
    if (l > r) return NULL;
    int m = (r-l)/2 + l;
    node *t = new node(a[m]);
    t->left = buildTree(l, m-1);
    t->right = buildTree(m+1, r);
    return t;
}

void printPreorder(node *root)
{
    if (root) {
        cout<<root->val<<" ";
    }
}

main()
{
    int t; cin>>t;
    while (t--) {
        a.clear();
        cin>>n;
        for (int i=1; i <= n; ++i)
        {
            cin>>x; a.pb(x);
        }
        sort(a.begin(), a.end());
        node *root = NULL;
        root = buildTree(0, n-1);
        printPreorder(root);
        cout<<endl;
    }
}