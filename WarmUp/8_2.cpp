//prev_permutation
#include<iostream>
#include<algorithm>

using namespace std;

int t, n;
int a[17];

void Init(){
    for(int i=0; i<n; ++i) a[i]=n-i;
}
void Print(){
    for(int i=0; i<n; ++i) cout<<a[i];
    cout<<" ";
}
void Solve(){
    Init();
    do{
        Print();
    } while(prev_permutation(a, a+n));
}
main(){
    cin>>t;
    while(t--){
        cin>>n;
        Solve();
        cout<<endl;
    }
}


