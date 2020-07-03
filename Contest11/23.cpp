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

int n, pIndex;
vi a;

node *buildTreeUntil (int m, int M)
{
	if (pIndex == a.size()) return NULL;
	int val = a[pIndex];
	if (val < m || val > M) return NULL;
	pIndex++;
	node *root = new node (val);
	root->left = buildTreeUntil (m, val-1);
	root->right = buildTreeUntil (val+1, M);
	return root;
}

node *buildTree () 
{
	pIndex = 0;
	return buildTreeUntil (INT_MIN, INT_MAX);
}

int depthBST(node *t)
{
	if(!t) return 0;
	return 1 + max(depthBST(t->left), depthBST(t->right));
}
main(){
	int t; cin>>t;
	while (t--) {
		a.clear();
		int x;
		cin>>n;
		for (int i=0; i<n; ++i) {
			cin>>x; a.pb(x);
		}
		node *root = buildTree();
		cout<<depthBST(root) - 1<<endl;
	}
}

