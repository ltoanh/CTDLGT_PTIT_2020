#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define pf push_front
#define F first
#define S second
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, n;
string s;

main(){
	cin>>t;
	deque<int> dq;
	while(t--){
		cin>>s;
        if(s=="PUSHFRONT"){
        	cin>>n;
        	dq.pf(n);
		}
        else if(s=="PRINTFRONT"){
        	if(dq.empty()) cout<<"NONE\n";
        	else cout<<dq.front()<<endl;
		}
        else if(s=="POPFRONT"){
        	if(!dq.empty()) dq.pop_front();
		}
        else if(s=="PUSHBACK"){
        	cin>>n;
        	dq.pb(n);
		}
        else if(s=="PRINTBACK"){
        	if(dq.empty()) cout<<"NONE\n";
        	else cout<<dq.back()<<endl;
		}
        else{
        	if(!dq.empty()) dq.pop_back();
		} 
	}
}

