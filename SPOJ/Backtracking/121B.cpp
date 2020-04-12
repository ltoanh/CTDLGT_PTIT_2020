#include<iostream>

using namespace std;

int n, a[17], gray[17];

void Convert(){
    gray[0]=a[0];
    cout<<gray[0];
    for(int i=1; i<n; ++i){
        gray[i]=a[i]^a[i-1];
        cout<<gray[i];
    }
    cout<<endl;
}
void Try(int i){
    for(int j=0; j<=1; ++j){
        a[i]=j;
        if(i==n-1) Convert();
        else Try(i+1);
    }
}
main(){
    cin>>n;
    Try(0);
}
