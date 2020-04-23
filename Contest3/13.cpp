#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
#define MAX 256

using namespace std;

int t, d;
string s;
int fre[MAX];
vii pos;
char res[10007];

bool cmp(pair<int, int> x, pair<int, int> y){
    return x.S>y.S;
}
void Init(){
    pos.clear();
    for(int i=0; i<MAX; ++i) fre[i]=0;
    for(int i=0; i<s.size(); ++i){
        fre[s[i]]++;
    }
    for(int i=0; i<MAX; ++i){
        if(fre[i]>0){
            pos.pb({i,fre[i]});
        }
    }
    sort(pos.begin(), pos.end(), cmp);
    for(int i=0; i<s.size(); ++i) res[i]='\0';
}
bool solve(){
    Init();
    int n=s.size();
    for(int i=0; i<pos.size(); ++i){
        int p=pos[i].S, vt=i;
        for(int j=vt; j<n; ++j){
            if(res[j]!='\0') vt++;
            else break;
        }
        for(int j=0; j<p; ++j){
            if(vt+j*d>n) return 0;
            res[vt+j*d]=pos[i].F;
        }
    }
    return 1;
}
main(){
	cin>>t;
	while(t--){
		cin>>d>>s;
		if(solve()) cout<<1;
		else cout<<-1;
		cout<<endl;
	}
}

