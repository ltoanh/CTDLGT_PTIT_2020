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

int r, c;
int a[507][507];
bool vis[507][507]={0}, gr[507][507]={0};
queue< ii> q;

bool checkGrow(){
	for(int i=1; i<=r; ++i)
		for(int j=1; j<=c; ++j) if(!vis[i][j]) return 0;
	return 1;
}
void insertGrow(int i, int j){
	if( j>1 && a[i][j-1]==1 && !gr[i][j-1]){
		q.push({i,j-1});
		gr[i][j-1]=1;
	}
	if( j<c && a[i][j+1]==1 && !gr[i][j+1]){
		q.push({i,j+1});
		gr[i][j+1]=1;
	}
	if( i>1 && a[i-1][j]==1 && !gr[i-1][j]){
		q.push({i-1,j});
		gr[i-1][j]=1;
	}
	if( i<r && a[i+1][j]==1 && !gr[i+1][j]){
		q.push({i+1,j});
		gr[i+1][j]=1;
	}
}
void init(){
	for(int i=1; i<=r; ++i){
		for(int j=1; j<=c; ++j){
			if(a[i][j]==0) vis[i][j]=1;
			else if(a[i][j]==2){
				vis[i][j]=1;
				insertGrow(i,j);
			}
		}
	}
}
int findMinDay(){
	init();
	int Fopt=0;
	while(!q.empty()){
		int len=q.size();
		while(len--){
			ii t=q.front(); q.pop();
			int i=t.F, j=t.S;
			vis[i][j]=1;
			insertGrow(i,j);
		}
		Fopt++;
	}
	return checkGrow()?Fopt:-1;
}
main(){
	cin>>r>>c;
	for(int i=1; i<=r; ++i){
		for(int j=1; j<=c; ++j) cin>>a[i][j];
	}
	cout<<findMinDay();
}

