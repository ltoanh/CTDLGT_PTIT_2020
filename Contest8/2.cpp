#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, num;
string req;

main(){
	cin>>t;
	queue<int> q;
	while(t--){
		cin>>req;
		if(req=="PUSH"){
			cin>>num;
			q.push(num);
		}
		else if(req=="PRINTFRONT"){
			if(!q.empty()) cout<<q.front()<<endl;
			else cout<<"NONE"<<endl;
		}
		else{
			if(!q.empty()) q.pop();
		}
	}
}

