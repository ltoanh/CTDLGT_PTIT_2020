#include<bits/stdc++.h>
using namespace std;

int n, k;
int dir[20], Fopt=INT_MAX;
vector<string> a;
bool vis[20]={0};

void Check(){
    int M = 0, m=INT_MAX;
    for(int i=0; i<n; ++i){
        int ans=0;
        for(int j=0; j<k; ++j){
            ans=ans*10+(a[i][dir[j]]-'0');
        }
        M=max(M, ans);
        m=min(m, ans);
    }
    Fopt=min(Fopt, M-m);
}
void Try(int i){
    for(int j=0; j<k; ++j){
        if(!vis[j]){
            vis[j]=1;
            dir[i]=j;
            if(i==k-1) Check();
            else Try(i+1);
            vis[j]=0;
        }
    }
}
main(){
    cin>>n>>k;
    for(int i=0; i<n; ++i){
        string x; cin>>x;
        a.push_back(x);
    }
    Try(0);
    cout<<Fopt;
}
