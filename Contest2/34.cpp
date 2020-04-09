#include<iostream>
#include<algorithm>

using namespace std;
int t, n=8;
bool col[17]={0}, cheo1[40]={0}, cheo2[40]={0};
int a[17][17], b[17];
int Fopt;

int Sum(){
    int s=0;
        for(int i=1; i<=n; ++i){
            s+=a[i][b[i]];
        }
    return s;
}
void Try(int i){
    for(int j=1; j<=n; ++j){
        if(!col[j] && !cheo1[i+j-1] && !cheo2[i-j+n]){
            col[j]=1;
			cheo1[i+j-1]=1;
			cheo2[i-j+n]=1;
            b[i]=j;
            if(i==n){
            	int tm=Sum();
            	if(tm>Fopt) Fopt=tm;
			}
            else Try(i+1);
            col[j]=0;
			cheo1[i+j-1]=0;
			cheo2[i-j+n]=0;
        }
    }
}
main(){
    cin>>t;
    while(t--){
    	Fopt=0;
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=n; ++j) cin>>a[i][j];
        }
        Try(1);
        cout<<Fopt<<endl;
    }
}

