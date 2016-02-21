/*Useful info
__builtin_popcount(n) counts number of active bits.
__builtin_popcountl(n) for long and ll for long long*/

//My shortcuts
#include<bits/stdc++.h>
#define ll long long int
#define sf(n) scanf("%d",&n);
#define sfl(n) scanf("%lld",&n);
#define sful(n) scanf("%llu",&n);
#define pf(n) printf("%d",n);
#define pfl(n) printf("%lld",n);
#define pful(n) printf("%llu",n);
#define ps printf(" ");
#define pn printf("\n");
#define str(a) printf("%s",a);
#define cut(n,val) memset(n,val,sizeof(n));
#define pub push_back()
#define ln size()
#define mpr make_pair()
#define bpop(n) __builtin_popcount(n)
const long long int mod=1e9+7;
using namespace std;
//Functions->
ll sd(ll n)
{
	return (1+(n-1)%9);
}
//Driver program->
int main()
{
	int t;
	sf(t);
	while(t--)
	{
		int a[15];
		ll i,a1,d,l,r,x;
		sfl(a1);sfl(d);sfl(l);sfl(r);
		a[0]=0;
		a[1]=sd(a1);
		x=a1;
		//pf(a[1]);ps;
		for(i=2;i<=9;i++)
		{
		    x=x+d;
		    x=sd(x);
		    a[i]=a[i-1]+x;
		    
		   // pf(a[i]);ps;
		}
		//pn;
		ll qu1,rem1,qu2,rem2;
		qu1=r/9;
		rem1=r%9;
		
		ll sum=0;
		sum+=(a[9]*qu1);
		
		sum+=(a[rem1]);
		
		qu2=l/9;
		rem2=l%9;	
		sum-=(a[9]*qu2);
		
		if(rem2-1<0)
		sum+=a[9]-a[8];
		else
		sum-=a[rem2-1];
		
		//if(rem2==0)
		//sum+=8;
		
		pfl(sum);pn;
    }
	return 0;
}
