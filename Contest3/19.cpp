#include<iostream>
#define ll long long
using namespace std;

int t;
ll p, q;

void findPra(ll p, ll q){
    if(q%p==0){
        cout<<"1/"<<q/p<<endl;
        return;
    }
    ll ans=q/p+1;
    cout<<"1/"<<ans<<" + ";
    findPra(p*ans-q,q*ans);
}
main(){
    cin>>t;
    while(t--){
        cin>>p>>q;
        findPra(p,q);
    }
}
