#include<iostream>

using namespace std;

int t, n, k;
int a[20];

void Solve(){
    for(int i=1; i<=n; ++i) a[i]=i;
    while(1){
        for(int i=1; i<=k; ++i) cout<<a[i];
        cout<<" ";
        int i=k;
        while(i>0 && a[i]>=n-k+i) i--;
        if(i==0) return;
        int ans=++a[i++];
        for(int j=i; j<=k; ++j) a[j]=++ans;
    }
}
main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        Solve();
        cout<<endl;
    }

}
