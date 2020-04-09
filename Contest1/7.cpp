#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int t, n;
int X[17], T[17];

bool cmp(string a, string b){
    for(int i=0; i<min(a.size(), b.size()); ++i){
        if(a[i]!=b[i]) return a[i]>b[i];
    }
}

void Print(vector<string> res){
	sort(res.begin(), res.end(), cmp);
	cout<<"("<<n<<") "; //TH: n=(10) (9 ...)
	for(int i=0; i<res.size(); ++i){
		cout<<"("<<res[i]<<") ";
	}
}
void Try(int i, vector<string> &res){
	for(int j=X[i-1]; j<=n-T[i-1]; ++j){
		X[i]=j;
		T[i]=T[i-1]+j;
		if(T[i]==n){
			string ans="";
			for(int k=i; k>0; --k){
                if(i==1) return;
				else{
                    ans+=(X[k]+'0');
                    if(k!=1) ans+=" ";
				}
			}
			res.push_back(ans);
		}
		else  Try(i+1, res);
	}
}

main(){
    cin>>t;
    while(t--){
        cin>>n;
        vector<string> res;
        X[0]=1; T[0]=0;
        Try(1, res);
        Print(res);
        cout<<endl;
    }

}
