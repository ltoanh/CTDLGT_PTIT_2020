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

int t, n, a[1007];
vii vec;

int minSwap() {
   sort(vec.begin(), vec.end());
   int cnt = 0;
   for (int i = 0; i < n; ++i) {
      if (vec[i].second == i) {
         continue;
      }
      cout<<vec[i].F<<" "<<vec[i].S<<endl;
      swap(vec[i].first,vec[vec[i].second].first);
      swap(vec[i].second,vec[vec[i].second].second);
      if (i != vec[i].second) {
         --i;
      }
         ++cnt;
   }
   cout<<endl;
   return cnt;
}
main(){
	cin>>t;
	while(t--){
		vec.clear();
		cin>>n;
		for(int i = 0; i < n; ++i){
			cin>>a[i];
			vec.pb({a[i], i});
		} 
		cout<<minSwap()<<endl;
	}
}

