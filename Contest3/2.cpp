#include<bits/stdc++.h>
#include<string>

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

int chuso(int num, int x){
    int i=0, sl=0;
    while(num){
        int ans=num%10;
        num/=10;
        if(ans==x) sl+=pow(10,i);
        i++;
    }
    return sl;
}

void solve(int n, int m){
    int sum=n+m;
    int numMin=sum-(chuso(n,6)+chuso(m,6));
    int numMax=sum+(chuso(n,5)+chuso(m,5));
    cout<<numMin<<" "<<numMax;
}
main(){
    int n, m;
	cin>>n>>m;
	solve(n,m);
}

