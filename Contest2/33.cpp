#include<iostream>

using namespace std;
int n, d=0;
bool col[17]={0}, cheo1[40]={0}, cheo2[40]={0};
int res[17];

//void Print(){
//	for(int i=1; i<=n; ++i) cout<<res[i]<<" ";
//	cout<<endl;
//}

void Try(int i){
    if(i>n){
        d++;
//        Print();
        return;
    }
    for(int j=1; j<=n; ++j){
        if(!col[j] && !cheo1[i+j-1] && !cheo2[i-j+n]){
            col[j]=1;
			cheo1[i+j-1]=1;
			cheo2[i-j+n]=1;
            res[i]=j;
            Try(i+1);
            col[j]=0;
			cheo1[i+j-1]=0;
			cheo2[i-j+n]=0;
        }
    }
}
main(){
    cin>>n;
    Try(1);
    cout<<d;
}
