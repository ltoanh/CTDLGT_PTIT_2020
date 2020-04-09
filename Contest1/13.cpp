#include<iostream>
#include<vector>

using namespace std;
int t;
int N, K;
char a[20];
vector<string> result;
void add(){
    string tmp="";
    for(int i=0; i<N; ++i) tmp+=a[i];
    result.push_back(tmp);
}
bool check(){
    int d=0, ans=0;
    for(int i=0; i<N; ++i){
        if(a[i]=='A') d++;
        else{
            if(d==K) ans++; //kiem tra co duy nhat 1 day A lien tiep
            d=0;
        }
    }
    if(d==K) ans++;
    if(ans==1) return 1;
    return 0;
}
void Try(int i){
    for(int j=0; j<=1; ++j){
        a[i]=j+'A';
        if(i>=N){
            if(check()) add();
            return;
        }
        Try(i+1);
    }
}
main(){
    cin>>N>>K;
    Try(0);
    cout<<result.size()<<endl;
    for(int i=0; i<result.size(); ++i) cout<<result[i]<<endl;
}
