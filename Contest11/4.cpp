//áp dụng duyệt trc

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

int n;
vi Preorder;

void printPostorder(int l, int r){
    if(l>r) return;
    int i;
    for(i = l + 1; i <= r; i++)
        if(Preorder[i] > Preorder[l])
            break;
    printPostorder(l + 1, i - 1); // add left node
    printPostorder(i, r);         //add right node
    cout<<Preorder[l]<<" ";
}

main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        int x;
        Preorder.clear();
        for (int i = 0; i < n; ++i){
            cin >> x; Preorder.pb(x);
        }
        printPostorder(0, n - 1);
        cout << endl;
    }
}
