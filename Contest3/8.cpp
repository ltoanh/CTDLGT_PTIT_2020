#include<iostream>
#include<algorithm>
#include<vector>
#include<utility> //pair
const int MAX=1007;
using namespace std;

int t, n;
int st[MAX], fi[MAX];
vector< pair<int, int> > pos;
vector<int> res;

bool cmp(pair<int, int> x, pair<int, int> y){
    return x.second<y.second;
}
main(){
    cin>>t;
    while(t--){
    	res.clear(); pos.clear();
        cin>>n;
        for(int i=0; i<n; ++i) cin>>st[i];
        for(int i=0; i<n; ++i) cin>>fi[i];
        for(int i=0; i<n; ++i){
            pos.push_back({st[i],fi[i]});
        }
        sort(pos.begin(), pos.end(), cmp);
        int ans=pos[0].second;
        res.push_back(1);
        for(int i=1; i<n; ++i){
            if(pos[i].first>=ans){
                ans=pos[i].second;
                res.push_back(i+1);
            }
        }
        cout<<res.size()<<endl;
    }
}
