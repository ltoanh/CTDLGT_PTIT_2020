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
map<char, int> Map;
int t;
string s;
void khoitao(){
	Map['I']=1;
	Map['V']=5;
	Map['X']=10;
	Map['L']=50;
	Map['C']=100;
	Map['D']=500;
	Map['M']=1000;
}

void Solve(){
	stack<int> st;
	st.push(Map[s[0]]);
	int ans=1;
	for(int i=1; i<=s.size(); ++i){
		if(i==s.size()){
			int temp=ans*Map[s[i-1]];
			if(ans>1){
				st.pop();
				st.push(temp);
			}
			break;
		}
		if(s[i]==s[i-1]) ans++;
		else{
			int temp=ans*Map[s[i-1]];
			if(ans>1){
				st.pop();
				st.push(temp);
				st.push(Map[s[i]]);
				ans=1;
			}
			else st.push(Map[s[i]]);
		}
	}
	ll res=st.top();
	int temp=st.top();
	st.pop();
	while (!st.empty()) 
    { 
        if(st.top()<temp) res-=st.top();
        else res+=st.top();
        temp=st.top();
        st.pop(); 
    } 
    cout << res <<endl; 
    
}
main(){
	cin>>t;
	khoitao();
	while(t--){
		cin>>s;
		Solve();	   
	}
}

