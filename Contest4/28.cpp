#include<iostream>
#include<algorithm>

using namespace std;

int t, n;
int a[100007];

main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; ++i) cin>>a[i];
        sort(a, a+n);
        int ans=0;
        for(int i=n/2-1, j=n-1; i>=0 && j>=n/2; ){
            if(a[j]>=2*a[i]){
                ans++;
                i--;
                j--;
            }
            else i--;
        }
        cout<<n-ans<<endl;
    }
}
