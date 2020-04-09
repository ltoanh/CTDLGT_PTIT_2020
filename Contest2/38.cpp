//N=(c0+1)(c1+1)(c2+1)...(cm+1)
//num=p0^c0*p1^c1*...*pm^cm
//Fopt=min(num)
//wr
#include<iostream>
#include<algorithm>

#define ll unsigned long long

using namespace std;

int t;
ll Fopt, N;
int p[15]={2,3,5,7,9,11,13,17,19, 23};

void Try(ll i, ll ans, ll x, ll n){
    if(i>9 || ans>Fopt || n>N) return;
    if(n==N) Fopt=min(Fopt, ans);
    Try(i, ans*p[i], x+1, n);
    Try(i+1, ans, 0, n*(x+1));
}

main(){
    cin>>t;
    while(t--){
        cin>>N;
        Fopt=1e18+5;
        Try(0,1,0,1);
        cout<<Fopt<<endl;
    }
}
