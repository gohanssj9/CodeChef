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

//Driver program->
int main()
{
    int t;
    sf(t);
    
    while(t--)
    {
        int n,m;
        sf(n);sf(m);
        
        int ans;
        int gc;
        gc=__gcd(n,m);
        ans=n/gc;
        
        if(ans==n)
        {
            str("Yes");pn;
        }
        else
        {
            str("No ");
            pf(ans);pn;
        }
    }
    return 0;
}
