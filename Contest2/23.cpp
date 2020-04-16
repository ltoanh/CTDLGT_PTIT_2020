#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int t, n, a[17][17];
bool vi[17][17]={0};
char ans[17*2];
vector<string> res;
void Pus(int m){
    string temp="";
    for(int i=0; i<m; ++i){
        temp+=ans[i];
    }
    res.push_back(temp);
}
void Print(){
    sort(res.begin(), res.end());
    for(int i=0; i<res.size(); ++i) cout<<res[i]<<" ";
    cout<<endl;
}
void Try(int i, int j, int m){
    if(i>=n-1 && j>=n-1){
        Pus(m);
        return;
    }
    if(i!=n-1 && a[i+1][j] && !vi[i+1][j]){
        ans[m]='D';
        vi[i][j]=1;
        Try(i+1, j, m+1);
        vi[i][j]=0;
    }
    if(j!=n-1 && a[i][j+1] && !vi[i][j+1]){
        ans[m]='R';
        vi[i][j]=1;
        Try(i, j+1, m+1);
        vi[i][j]=0;
    }
    if(j!=0 && a[i][j-1] && !vi[i][j-1]){
        ans[m]='L';
        vi[i][j]=1;
        Try(i, j-1, m+1);
        vi[i][j]=0;
    }
    if(i!=0 && a[i-1][j] && !vi[i-1][j]){
        ans[m]='U';
        vi[i][j]=1;
        Try(i-1, j, m+1);
        vi[i][j]=0;
    }
}
main(){
    cin>>t;
    while(t--){
        res.clear();
        cin>>n;
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j) cin>>a[i][j];
        }
        if(a[0][0]){
            Try(0,0,0);
            if(res.size()) Print();
            else cout<<-1<<endl;
        }
        else cout<<-1<<endl;
    }
}

