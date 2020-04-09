#include<iostream>

using namespace std;

int t, n, a[17][17];
int res[17*2];
bool fl;
void Print(int m){
    fl=1;
    for(int i=0; i<m; ++i){
        if(res[i]) cout<<"R";
        else cout<<"D";
    }
    cout<<" ";
}

void Try(int i, int j, int m){
    if(i>=n-1 && j>=n-1){
        Print(m);
        return;
    }
    if(i+1<n && a[i+1][j]){
        res[m]=0;
        Try(i+1, j, m+1);
    }
    if(j+1<n && a[i][j+1]){
        res[m]=1;
        Try(i, j+1, m+1);
    }
}
main(){
    cin>>t;
    while(t--){
        fl=0;
        cin>>n;
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j) cin>>a[i][j];
        }
        if(a[0][0]){
            Try(0,0,0);
            if(!fl) cout<<-1;
        }
        else cout<<-1;
        cout<<endl;
    }
}
