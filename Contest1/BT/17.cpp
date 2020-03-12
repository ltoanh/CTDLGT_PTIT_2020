#include<iostream>
#include<math.h>
 
using namespace std;

long long a,b,c,d,e,f,x,y;
	
long long ktcp(long long a)
{
	long long b=sqrt(a);
	if(b*b==a) return b;
	return 0;
}
 
bool solve(){
    if(y==0) return 0;
	if(a>b) swap(a,b);
	if(c>d) swap(c,d);
	if(e>f) swap(e,f);
	if(b==d && d==f && f==y) return 1;
	else
	{
		if(d==y) {swap(a,c); swap(b,d);}
		if(f==y) {swap(a,e); swap(b,f);}
		if(b==y)
		{
			a=y-a;
			if((c==a && e==a) || (d==a && e==a)|| (c==a && f==a) || (d==a && f==a))  return 1;
			return 0;
		}		
		return 0;
	}
 
}
 
int main()
{
	cin>>a>>b>>c>>d>>e>>f;
	x=a*b+c*d+f*e;
	y=ktcp(x);
	cout<<(solve()?"YES":"NO");
}
