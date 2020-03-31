#include<iostream>
#include<algorithm>

using namespace std;

int t, n;
int a[1007];

void Print(){
    for(int i=1; i<=n; ++i) cout<<a[i]<<" ";
    cout<<endl;
}
void Solve(){
    int i=n-1;
    while(i>0 && a[i]>a[i+1]) i--;
    if(i==0){
        for(int i=1; i<=n; ++i) cout<<i<<" ";
        cout<<endl;
        return;
    }
    int j=n;
    while(j>i && a[j]<a[i])  j--;
    swap(a[i], a[j]);
    int l=i+1, r=n;
    while(l<r){
        swap(a[l], a[r]);
        l++; r--;
    }
    Print();
}
main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; ++i) cin>>a[i];
        Solve();
    }
}
