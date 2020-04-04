//next_permutation
#include<iostream>
#include<algorithm>

using namespace std;

int t, n;
int a[1007];

main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; ++i) cin>>a[i];
        next_permutation(a, a+n);
        for(int i=0; i<n; ++i) cout<<a[i]<<" ";
        cout<<endl;
    }
}
