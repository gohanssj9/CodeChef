/*Useful info
__builtin_popcount(n) counts number of active bits.
__builtin_popcountl(n) for long and ll for long long

to_string(n): Converts a number from int to string*/

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
#define fo(in,out) for(int i=in;i<out;i++)
#define st(n) to_string(n) //Works only in c++11
const long long int mod=1e9+7;
using namespace std;
//Functions->

//Driver program->
int main()
{
	int t;
	sf(t);
	while(t--)
	{
		int n;
		sf(n);
		
		if(n<=6)
		{
			pf(-1);pn;
			continue;
		}
		
		if(n==8)
		{
			pf(n);pn;
			for(int i=1;i<=2;i++)
			{
				pf(i);ps;pf(i+1);pn;
			}
			
			for(int i=6;i<=7;i++)
			{
				pf(i);ps;pf(i+1);pn;
			}
			pf(3);ps;pf(6);pn;
			pf(2);ps;pf(4);pn;
			pf(1);ps;pf(n);pn;
			pf(5);ps;pf(n);pn;
			
			pf(1);pn;
			continue;
		}
		
		if(n%2==0)
		{
			pf(n);pn;
			for(int i=1;i<=n-2;i++)
			{
				pf(i);ps;pf(i+1);pn;
			}
			
			pf(1);ps;pf(n-1);pn;
			int div=(n/2)+3;
			pf(6);ps;pf(n);pn;
			pf(div);pn;
		}
		
		if(n%2==1)
		{
			pf(n);pn;
			for(int i=1;i<=n-2;i++)
			{
				pf(i);ps;pf(i+1);pn;
			}
			
			pf(1);ps;pf(n-1);pn;
			int roun=(n/2)+3;
			
			pf(roun);ps;pf(n);pn;
			pf(1);pn;
		}
	}
	return 0;
}
