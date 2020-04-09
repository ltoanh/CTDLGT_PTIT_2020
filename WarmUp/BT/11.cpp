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

int t;
string s;

string title(string x){
    x[0]=toupper(x[0]);
    FOR(i,1,x.size()){
        x[i]=tolower(x[i]);  
    }
    return x;
}
string Upper(string x){
    FOR(i,0,x.size()){
        x[i]=toupper(x[i]);
    }
    return x;
}
void chuanHoa(){
	vector<string> result;
	string ans="";
	bool flag=0;
	FOR(i,0,s.size()){
		if(s[i]!=' '){
		    ans+=s[i];
		    flag=1;
		}
		else if(s[i]==' ' && flag){
			result.pb(title(ans));
			ans="";
			flag=0;
		}
	}
	if(flag) result.pb(title(ans));
	FOR(i,1,result.size()){
		cout<<result[i];
		if(i==result.size()-1) cout<<", ";
		else cout<<" ";
	}
	cout<<Upper(result[0]);
	cout<<endl;
}
main(){
	cin>>t;
	cin.ignore();
	while(t--){
	   getline(cin, s);
	   chuanHoa();
	}
}

