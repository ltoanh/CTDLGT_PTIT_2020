#include<iostream>

using namespace std;

int n, k, sum=0, d=0;
int a[17][17], res[17][17];
bool vis[17]={0}, b[17][17]={0};

void Inp(){
    int ans=1;
    for(int i=1; i<=n; ++i){
       for(int j=1; j<=n; ++j){
            if(b[i][j]) res[d][ans++]=j;
       }
    }
}

void Solve(int i){
    if(i>n){
        if(sum==k){
            d++;
            Inp();
        }
        return;
    }
    for(int j=1; j<=n; ++j){
        if(!vis[j]){
            vis[j]=b[i][j]=1;
            sum+=a[i][j];
            Solve(i+1);
            vis[j]=b[i][j]=0;
            sum-=a[i][j];
        }
    }

}
main(){
    cin>>n>>k;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j) cin>>a[i][j];
    }
    Solve(1);
    cout<<d<<endl;
    for(int i=1; i<=d; ++i){
        for(int j=1; j<=n; ++j) cout<<res[i][j]<<" ";
        cout<<endl;
    }
}
