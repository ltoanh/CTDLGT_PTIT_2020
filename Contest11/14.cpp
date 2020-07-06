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

struct node
{
    int val;
    node *left, *right;
    node(int data)
    {
        this->val = data;
        left = right = NULL;
    }
};

int n;

bool isLeaf(node *t)
{
    if (!t)
        return 0;
    if (t->left == NULL && t->right == NULL)
        return 1;
    return 0;
}

int sumAllLeftNodes(node *t)
{
    if (t == NULL)
        return 0;
    if (t->left && isLeaf(t->left))
        return t->left->val + sumAllLeftNodes(t->right);
    return sumAllLeftNodes(t->left) + sumAllLeftNodes(t->right);
}
void solve()
{
    map<int, node *> m;
    node *root = NULL;
    node *child;
    int n1, n2;
    char lr;
    while (n--)
    {
        node *parent;
        cin >> n1 >> n2 >> lr;
        if (m.find(n1) == m.end())
        {
            parent = new node(n1);
            m[n1] = parent;
            if (root == NULL)
                root = parent;
        }
        else
            parent = m[n1];
        child = new node(n2);
        if (lr == 'L')
            parent->left = child;
        else
            parent->right = child;
        m[n2] = child;
    }
    cout << sumAllLeftNodes(root) << endl;
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve();
    }
}
