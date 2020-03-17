#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX=1e+5;


using namespace std;

int n, S;
int t[37];
int Fopt=INT_MAX;

void Try(int i, int Si, int Di){
    if(Si>S || Di>Fopt) return;
    if(i>=n){
    	if(Si==S) Fopt=min(Fopt, Di);
        return;
    }
    Try(i+1, Si, Di);
    Try(i, Si+t[i], Di+1);
}
main(){
    cin>>n>>S;
    for(int i=0; i<n; ++i){
        cin>>t[i];
    }
    Try(0, 0, 0);
    cout<<Fopt;
}
