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

int n, a[1007];
node *root;

node *insertNode(node *t, int x)
{
    if (!t) return new node(x);
    if (x <= t->val) {
        t->left = insertNode(t->left, x);
    } else {
        t->right = insertNode(t->right, x);
    }
    return t;

}

void printPreorder(node *t)
{
    if (t) {
        cout<<t->val<<" ";
        printPreorder(t->left);
        printPreorder(t->right);
    }
}

void constructBST()
{
    root = NULL;
    for (int i=0; i<n; ++i) root=insertNode(root, a[i]);
    printPreorder(root);
}

main()
{
    int t; cin>>t; 
    while (t--) {
        cin>>n;
        for (int i=0; i<n; ++i) cin>>a[i];
        constructBST();
        cout<<endl;
    }
}