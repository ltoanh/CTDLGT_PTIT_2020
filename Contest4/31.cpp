#include<iostream>
#define ll long long
const int mod=1e9+7;
using namespace std;

struct Matrix{
    int n, k;
    ll m[17][17];
};

Matrix operator * (Matrix X, Matrix Y){
    Matrix res;
    res.n=X.n;
    for(int i=0; i<X.n; ++i){
        for(int j=0; j<X.n; ++j){
            res.m[i][j]=0;
            for(int k=0; k<X.n; ++k){
                res.m[i][j]=(res.m[i][j]+(X.m[i][k]*Y.m[k][j]%mod))%mod;
            }
        }
    }
    return res;
}
Matrix findPow(Matrix A, int k){
	if(k==1) return A;
	Matrix temp=findPow(A,k/2);
	if(k&1) return temp*temp*A;
	return temp*temp;
}
main(){
	int t; cin>>t;
	while(t--){
		Matrix A;
		cin>>A.n>>A.k;
		for(int i=0; i<A.n; ++i){
			for(int j=0; j<A.n; ++j) cin>>A.m[i][j];
		}	
		Matrix C=findPow(A, A.k);
		for(int i=0; i<C.n; ++i){
			for(int j=0; j<C.n; ++j) cout<<C.m[i][j]<<" ";
			cout<<endl;
		}
	}
}
