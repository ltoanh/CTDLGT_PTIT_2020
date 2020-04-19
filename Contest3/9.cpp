#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define pb push_back
#define F first
#define S second
const int MAX=1e+5;

using namespace std;
int t, n;

bool cmp(ii x, ii y){
	if(x.S!=y.S){
		return x.S>y.S;
	}
	return x.F<y.F;
}
main(){
	cin>>t;
	while(t--){
		int stt, dead, pro;
		bool vis[1007]={0};
		vii jobs; 
		cin>>n;
		for(int i=0; i<n; ++i){
			cin>>stt>>dead>>pro;
			jobs.pb({dead, pro});
		}
		sort(jobs.begin(), jobs.end(), cmp);
		int res=0, count=0;
		for(int i=0; i<n; ++i){
			for(int j=min(n, jobs[i].F)-1; j>=0; --j){
				//have slot to do this job
				if(!vis[j]){
					vis[j]=1;
					res+=jobs[i].S;
					count++;
					break;
				}
			}
		}
		cout<<count<<" "<<res<<endl;
	}
}

