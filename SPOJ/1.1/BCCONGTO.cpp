#include<bits/stdc++.h>

using namespace std;
string s;
int res;

void Solve(){
    res=0;
    reverse(s.begin(), s.end());
    for(int i=0; i<s.size(); ++i){
        int ans=s[i]-'0';
        if(ans>4) ans-=1;
        res+=ans*pow(9,i);
    }
    cout<<res<<endl;
}
main(){
    while(1){
        cin>>s;
        if(s=="0") break;
        Solve();
    }
}