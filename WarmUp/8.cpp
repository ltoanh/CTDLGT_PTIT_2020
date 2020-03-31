#include<iostream>

using namespace std;

int t;
int n, a[17];

void Solve(){
    for(int i=1; i<=n; ++i){
        a[i]=n-i+1;
    }
    while(1){
        for(int i=1; i<=n; ++i) cout<<a[i];
        cout<<" ";
        int i=n-1;
        while(i>0 && a[i]<a[i+1]) i--;
        if(i<=0) return;
        int j=n;
        while(i<j && a[i]<a[j]) j--;
        swap(a[i], a[j]);
        int l=i+1, r=n;
        while(l<r){
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}
main(){
    cin>>t;
    while(t--){
        cin>>n;
        Solve();
        cout<<endl;
    }
}
