#include<bits/stdc++.h>

using namespace std;

int t, n, m, k=3;
int a[107], dir[107]={0};
int Fopt, res;

void Find(){
    int ans=0;
    for(int i=1; i<=k; ++i) ans+=a[dir[i]];
    if(m-ans<Fopt && m-ans>=0){ //khong vuot qua M
        Fopt=m-ans;
        res=ans;
    }
}
//QL To hop
void Try(int i){
    for(int j=dir[i-1]+1; j<=n-k+i; ++j){
        dir[i]=j;
        if(i==k) Find();
        else Try(i+1);
    }
}
main(){
    cin>>t;
    while(t--){
        Fopt=INT_MAX, res=0;
        cin>>n>>m;
        for(int i=1; i<=n; ++i) cin>>a[i];
        Try(1);
        cout<<res<<endl;
    }

}
