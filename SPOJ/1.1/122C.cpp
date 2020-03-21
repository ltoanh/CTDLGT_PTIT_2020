#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

#define ll long long

using namespace std;

string mul(string num1, string num2) {
	int len1 = num1.size();
	int len2 = num2.size();
	if (len1 == 0 || len2 == 0)
	{
		return "0";
	}
	int vt_n1=0, vt_n2 = 0;
	vector<int> result(len1 + len2, 0);
	for (int i = len1 - 1; i >= 0; --i)
	{
		int carry = 0;
		int n1 = num1[i] - '0';
		int vt_n2 = 0;
		for (int j = len2 - 1; j >= 0; --j)
		{
			int n2 = num2[j] - '0';
			int sum = n1 * n2 + result[vt_n1 + vt_n2] + carry;
			result[vt_n1 + vt_n2] = sum % 10;
			carry = sum /10;
			vt_n2++;
		}
		if (carry > 0)
		{
			result[vt_n1 + vt_n2] += carry;
		}
		vt_n1++;
	}
	string s = "";
	int i = result.size() - 1;
	while (i >= 0 && result[i] == 0)
	{
		i--;
	}
	if (i == -1)
	{
		return "0";
	}
	while (i >= 0)
	{
		s += result[i] + '0';
		i--;
	}
	return s;
}

string convert(int i){
	string res="";
	while(i){
		res+=(i%10)+'0';
		i/=10;
	}	
	reverse(res.begin(), res.end());
	return res;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		ll dem=0;
		cin>>n>>x;
		if(n<20){
			long long s=1;
			for (int j=1; j<=n; j++)
			{
				s*=j;
			}
			long long p=1;
			while (s/p!=0)
			{
				int so=(s/p)%10;
				if (so==x) dem++;
				p=p*10;
			}
		}
		else{
			string res="2432902008176640000";
			for(int i=21; i<=n; ++i){
				string ans= convert(i);
				res=mul(res, ans);
			}
			for(int i=0; i<res.size(); ++i){
				if(res[i]==x+'0') dem++;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
