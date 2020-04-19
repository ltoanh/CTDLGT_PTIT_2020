#include<iostream>

const int MAX=1e6+7;
using namespace std;

int t, n, k;
int a[MAX];

int binarySearch(int left, int right, int x){
    if(left<=right){
        int mid=left+(right-left)/2;
        if(x==a[mid]) return mid;
        if(x<a[mid])
            return binarySearch(left, mid-1, x);
        else
            return binarySearch(mid+1, right, x);
    }
    return -1;
}
main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1; i<=n; ++i) cin>>a[i];
        int res=binarySearch(1, n, k);
        if(res<0) cout<<"NO";
        else cout<<res;
        cout<<endl;
    }
}
