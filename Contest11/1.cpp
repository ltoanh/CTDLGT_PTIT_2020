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
    char val;
    node *left, *right;
};

string s;

bool isOperator(char x){
    if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
        return 1;
    return 0;
}
//khoi tao node
node *newNode(char v){
    node *tmp = new node;
    tmp->left = tmp->right = NULL;
    tmp->val = v;
    return tmp;
}

node *tree(){
    stack<node *> st;
    node *t, *t1, *t2;
    for (int i = 0; i < s.size(); ++i){
        if (!isOperator(s[i])){
            t = newNode(s[i]);
            st.push(t);
        }
        else{
            t = newNode(s[i]);
            //tao node con
            t1 = st.top(); st.pop();
            t2 = st.top(); st.pop();
            t->right = t1; t->left = t2;
            st.push(t);
        }
    }
    t=st.top();
    return t;
}

void LNT(node *t){
    if(t){
        LNT(t->left);
        cout<<t->val<<" ";
        LNT(t->right);
    }
}
main(){
    int t;
    cin >> t;
    while (t--){
        cin >> s;
        node *r = tree();
        LNT(r);
        cout<<endl;
    }
}