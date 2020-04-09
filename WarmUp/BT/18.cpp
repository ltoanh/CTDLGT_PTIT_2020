 #include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a; i<b; ++i)
#define nFOR(i,a,b) for(int i=a; i>=b; --i)

#define ull unsigned long long
#define ll long long
#define pb push_back
#define pii pair <int, int>
#define S second
#define F first

const int MAX=1e+5;
using namespace std;

string s;
map< char, pii > pos;

main(){
	cin>>s;
	for(int i=0; i<s.size(); ++i){
		if(pos[s[i]].F==0 && s[i]!=s[0]) pos[s[i]].F=i;
		else if(pos[s[i]].S==0) pos[s[i]].S=i;
	}
	map< char, pii >::iterator it;
	vector< pair< char , pii > > res;
	for(it = pos.begin(); it!=pos.end(); ++it){
		res.pb({it->F, it->S});
	}
	int result=0;
	for(int i=0; i<res.size() ; ++i) {
		int temp[27]={0}, dem=0;
		for(int j=res[i].S.F+1; j<res[i].S.S; ++j){
			temp[s[j]-'A']++;
		}
		for(int k=0; k<27; ++k){
			if(temp[k]==1) dem++;
		}
		result+=dem;
	}
	cout<<result/2;

}

