#include<bits/stdc++.h>

using namespace std;

int t, n, k;
int a[17], pos[17];
vector< vector<int> > res;

void Init(){
    cin>>n>>k;
    for(int i=1; i<=n; ++i){
        cin>>a[i];
    }
    sort(a+1, a+n+1);
}
void Pus(){
    vector<int> ans;
    for(int i=1; i<=n; ++i){
        if(pos[i]){
            ans.push_back(a[i]);
        }
    }
    res.push_back(ans);
}
bool Check(){
    int sum=0;
    for(int i=1; i<=n; ++i){
        sum+=pos[i]*a[i];
    }
    return sum==k;
}
//QL NP
void Try(int i){
    for(int j=0; j<=1; ++j){
        pos[i]=j;
        if(i==n){
            if(Check()) Pus();
        }
        else Try(i+1);
    }
}
void Solve(){
    Try(1);
    sort(res.begin(), res.end());
    if(res.size()){
        for(int i=0; i<res.size(); ++i){
            cout<<"[";
            for(int j=0; j<res[i].size(); ++j){
                cout<<res[i][j];
                if(j!=res[i].size()-1) cout<<" ";
                else cout<<"]";
            }
            cout<<" ";
        }
    }
    else cout<<-1;
    cout<<endl;
}
main(){
    cin>>t;
    while(t--){
    	res.clear();
        Init();
        Solve();
    }
}

