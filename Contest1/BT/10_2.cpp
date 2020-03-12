#include<iostream>
#include<string>
#include<sstream> //stringstream
#include<vector>


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
main(){
	cin>>t;
	cin.ignore();
	while(t--){
		stringstream ss;
		getline(cin, s);	   
		ss<<s;
		vector<string> result;
		while(!ss.eof()){
			string ans; ss>>ans;
			result.pb(title(ans));
		}
		FOR(i,0,result.size()){
			cout<<result[i]<<" ";
		}
		cout<<endl;
	}
}

