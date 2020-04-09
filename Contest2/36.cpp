#include<iostream>
#define ll long long
using namespace std;

int t;
ll arr[7], res[100], dir[7];
bool vi[7]={0}, fl;

bool Check(){
    ll ans=arr[dir[1]];
    for(int i=2; i<=5; ++i){
        if(res[i]==0) ans+=arr[dir[i]];
        else if(res[i]==1) ans-=arr[dir[i]];
        else ans*=arr[dir[i]];
    }
    return ans==23;
}
void Try(int i){
    for(int j=0; j<=2; ++j){
        res[i]=j;
        if(i==5){
            if(Check()) fl=1;
        }
        else Try(i+1);
    }
}
void Solve(int i){
    for(int j=1; j<=5; ++j){
        if(!vi[j]){
            vi[j]=1;
            dir[i]=j;
            if(i==5) Try(2);
            else Solve(i+1);
            vi[j]=0;
        }
    }
}
main(){
    cin>>t;
    while(t--){
        fl=0;
        for(int i=1; i<=5; ++i) cin>>arr[i];
        Solve(1);
        cout<<(fl?"YES":"NO")<<endl;
    }
}
