//WR
#include<bits/stdc++.h>

using namespace std;

int t, n, k;
int a[17], pos[17];
bool fl;
void Init(){
    cin>>n>>k;
    for(int i=1; i<=n; ++i){
        cin>>a[i];
    }
    sort(a+1, a+n+1);
    fl=0;
}

void Solve(){
    int sum=0, res[17];
    for(int i=1; i<=n; ++i){
        sum+=pos[i]*a[i];
    }
    if(sum==k){
        int vt=1;
        fl=1;
        for(int i=1; i<=n; ++i){
            if(pos[i]){
                res[vt++]=a[i];
            }
        }
        cout<<"[";
        for(int i=1; i<vt-1; i++) cout<<res[i]<<" ";
        cout<<res[vt-1]<<"] ";
    }
}
//QL NP
void Try(int i){
    for(int j=1; j>=0; --j){
        pos[i]=j;
        if(i==n) Solve();
        else Try(i+1);
    }
}
main(){
    cin>>t;
    while(t--){
        Init();
        Try(1);
        if(!fl) cout<<-1;
        cout<<endl;
    }
}

