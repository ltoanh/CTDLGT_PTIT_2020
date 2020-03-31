#include<iostream>
#include<string>

using namespace std;

int t;
string a;

void Solve(){
    int i=a.size()-1;
    while(i>=0 && a[i]=='1') i--;
    if(i>=0) a[i]='1';
    for(int j=i+1; j<a.size(); ++j){
        a[j]='0';
    }
}

main(){
    cin>>t;
    while(t--){
        cin>>a;
        Solve();
        cout<<a<<endl;
    }
}
