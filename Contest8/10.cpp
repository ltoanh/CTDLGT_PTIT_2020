#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
const int MAX = 1e5 + 7;
const int mod = 1e9 + 7;

using namespace std;

int t, n;

struct node{
	int F;
	int S;
};

main(){
	cin>>t;
	while(t--){
		cin>>n;
		set<int> val;
		queue<node> q;
		q.push({n,0});
		int res=INT_MAX;
		while(!q.empty()){
			node a = q.front(); q.pop();
			if(a.F==1){
				res=a.S;
				break;
			}
			if(a.F-1==1){
				res=a.S+1;
				break;
			}
			if(val.find(a.F-1)==val.end()){
				val.insert(a.F-1);
				q.push({a.F-1, a.S+1});
			}
			for(int i=2; i*i<=a.F; ++i){
				if(a.F%i==0 && val.find(a.F/i)==val.end()){
					val.insert(a.F/i);
					q.push({a.F/i, a.S+1});
				}
			}
		}	
		cout<<res<<endl;
	}
}

