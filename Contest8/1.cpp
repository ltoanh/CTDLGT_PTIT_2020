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

int t, n, type, num;

main(){
    cin>>t;
    while(t--){
        cin>>n;
        queue<int> q;
        while(n--){
            cin>>type;
            if(type==3) cin>>num;
            switch (type){
                case 1:{
                	cout<<q.size()<<endl;
					break;
				}
                case 2:{
                	cout<<(q.empty()?"YES":"NO")<<endl;
					break;
				}
                case 3:{
                	q.push(num); 
					break;
				}
                case 4:{
                	if(!q.empty()) q.pop(); 
					break;
				}
                case 5:{
                	cout<<(!q.empty()?q.front():-1)<<endl; 
					break;
				}
                case 6:{
                	cout<<(!q.empty()?q.back():-1)<<endl;
					break;
				} 
            }
        }
    }
}
