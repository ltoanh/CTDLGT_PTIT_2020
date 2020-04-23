#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define ii pair < int, int >
#define vii vector< ii >
#define vi vector< int >
#define pb push_back
#define F first
#define S second
#define int ll
const int MAX=1e+5;

using namespace std;

int t, n;
vi cube;
string ans;

bool cmp(int x, int y){
	return x>y;
}

string findLargestCube(){
	for(int i=1; i*i*i<=n; ++i){
		cube.pb(i*i*i);
	}
	sort(cube.begin(), cube.end(), cmp);
	for(int i=0; i<cube.size(); ++i){
		int index=0;
		string currentCube=to_string(cube[i]);
		for(int j=0; j<ans.size(); ++j){
			if(ans[j]==currentCube[index]) index++;
			if(index==currentCube.size()) return currentCube;
		}
	}
	return "-1";
}
main(){
	cin>>t;
	while(t--){
		cube.clear();
		cin>>n;
		ans=to_string(n);
		cout<<findLargestCube()<<endl;
	}
}

