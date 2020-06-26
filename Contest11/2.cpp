#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
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
    string val;
    node *left, *right;
};

int n;
string s[1007];

bool isOperator(string x){
    if (x == "+" || x == "-" || x == "*" || x == "/")
        return 1;
    return 0;
}

//khoi tao node
node *newNode(string v){
    node *tmp = new node;
    tmp->left = tmp->right = NULL;
    tmp->val = v;
    return tmp;
}

int calc(int a, string op, int b){
    if(op=="+") return a+b;
    if(op=="-") return a-b;
    if(op=="*") return a*b;
    if(op=="/") return a/b;
    return 0;
}

int tree(node *root){
    if(!root) return 0;
    if(isOperator(root->val)) return calc(tree(root->left), root->val, tree(root->right));
    int res;
    istringstream(root->val)>>res;
    return res;
}

main(){
    int t;
    cin >> t;
    while (t--){
        cin>>n;
        for(int i=0; i<n; ++i) cin>>s[i];
        int p=0;
        node *root = newNode(s[p++]);
        queue<node *> q;
        q.push(root);
        while(!q.empty()){
            node *tmp = q.front(); q.pop();
            node *l, *r;
            if(isOperator(tmp->val)){
                l = newNode(s[p++]); r = newNode(s[p++]);
                tmp->left = l; tmp->right = r;
                q.push(l); q.push(r);
            }
        }
        cout<<tree(root)<<endl;
    }
}