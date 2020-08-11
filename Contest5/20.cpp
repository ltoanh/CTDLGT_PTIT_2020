#include<bits/stdc++.h>
#define ll long long
using namespace std;

int t;
string s;
main(){
	cin>>t;
	while(t--){
		cin>>s;
		int n = s.size();
		ll res = 0;
		for(int i = 0; i < n; ++i){
            string tmp = "";
			for(int j = i; j >=0; --j){
				tmp = s[j] + tmp;
				ll ans;
				istringstream(tmp) >> ans;
				res += ans;
			}
		}
		cout<<res<<endl;
	}
}

