//next_permutation
#include<iostream>
#include<algorithm>

using namespace std;

int n, sum;
int matrix[17][17], a[17], res[17][17];

void Init(){
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j) cin>>matrix[i][j];
    }
    for(int i=1; i<=n; ++i) a[i]=i;
}
bool Check(){
    int s=0;
    for(int i=1; i<=n; ++i){
        s+=matrix[i][a[i]];
    }
    return s==sum;
}
void Solve(){
    int d=0;
    do{
        if(Check()){
            d++;
            for(int i=1; i<=n; ++i){
                res[d][i]=a[i];
            }
        }
    } while(next_permutation(a+1, a+n+1));
    cout<<d<<endl;
    for(int i=1; i<=d; ++i){
        for(int j=1; j<=n; ++j) cout<<res[i][j]<<" ";
        cout<<endl;
    }
}
main(){
    cin>>n>>sum;
    Init();
    Solve();
}

