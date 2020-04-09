#include<iostream>

using namespace std;

int t, n;
string s;
string res;
bool vis[17]={0};
void Try(int i){
    if(i>=n){
        cout<<res<<" ";
        return;
    }
    for(int j=0; j<n; ++j){
        if(!vis[j]){
            vis[j]=1;
            res[i]=s[j];
            Try(i+1);
            vis[j]=0;
        }
    }
}
main(){
    cin>>t;
    while(t--){
        cin>>s;
        n=s.size();
        res=s;
        Try(0);
        cout<<endl;
    }
}
