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

int t, s, d;
int a[5]={1,10,100, 1000};

bool prime[MAX];

void findPrime(){
	memset(prime, 1, sizeof(prime));
	prime[0]=prime[1]=0;
	for(int i=2; i<=100; ++i){
		if(prime[i]){
			for(int j=i*i; j<MAX; j+=i) prime[j]=0;
		}
	}
}

int minStep(){
	queue<int> q;
	int st[MAX]={0};
	if(s==d) return 0;
	q.push(s);
	st[s]=1;
	while(!q.empty()){
		int t1= q.front(); q.pop();
		for(int i=0; i<4; ++i){
			for(int j=0; j<10; ++j){
				int t2=a[i]*((t1/a[i]/10)*10 + j) + t1%a[i];
				if(t2>1000 && t2 < 100000 && prime[t2] && !st[t2]){
					q.push(t2);
					st[t2]=st[t1]+1;
					if(t2==d) return st[t2]-1;
				}
			}
		}
	}
	return -1;
}
main(){
	findPrime();
	cin>>t;
	while(t--){
		cin>>s>>d;
		cout<<minStep()<<endl;
	}
}

