
//wr
#include<iostream>

using namespace std;

int n, m;
char bomp[107][107];
int res[107][107];

void Init(){
	for(int j=0; j<=m; ++j){
		bomp[0][j]='.';
		bomp[n+1][j]='.';
	}
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=m; ++j){
        	cin>>bomp[i][j];
		}
    }
}

void Print(){
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=m; ++j){
			if(res[i][j]<0) cout<<"*";
			else cout<<res[i][j];
		}
		cout<<endl;
	}
}

void Check(int i, int j){
	int d=0;
	if(bomp[i][j]=='*'){
		res[i][j]=-1;
		return;
	}
	if(bomp[i-1][j-1]=='*') d++;
	if(bomp[i-1][j]=='*') d++;
	if(bomp[i-1][j+1]=='*') d++;
	if(bomp[i][j-1]=='*') d++;
	if(bomp[i][j+1]=='*') d++;
	if(bomp[i+1][j-1]=='*') d++;
	if(bomp[i+1][j]=='*') d++;
	if(bomp[i+1][j+1]=='*') d++;
	res[i][j]=d;
}
void Solve(){
    Init();
     for(int i=1; i<=n; ++i){
         for(int j=1; j<=m; ++j){
             Check(i, j);
         }
     }
    Print();
}
int main(){
    while(1){
        cin>>n>>m;
        if(m==0 && n==0) return 0;
        Solve();
    }
}
