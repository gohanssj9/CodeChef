#include<bits/stdc++.h>
#define ll long long
#define trace(n) cout<<n<<endl;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        ll a[n+2];
        ll i,j=0,max=0,count=0;
       // bool jaf=false;
        count=n;
//        trace(count);
        for(i=0;i<n;i++)
        cin>>a[i];
        //max=a[1];
        for(i=1;i<n;i++)
        {
            if(a[i]>=a[i-1])
            max=i;
            else
            {
                if(max-j>1)
                {
  //                  printf("Max-j>1\n");
                    ll d=max-j;
                    count+=((d)*(d+1))/2;
    //                trace(count);
                }
                else if((max-j)==1)
                {
      //              printf("max-j==1\n");
                    count++;
        //            trace(count);
                }

                j=i;
                max=i;
            }
        }

        if(max-j>1)
        {
          //  printf("Afterloop max-j>1\n");
            ll d;
            d=max-j;
            count+=((d)*(d+1))/2;
            //trace(count);
        }
        else if((max-j)==1)
        {
       //     printf("Afterloop max-j==1\n");
            count++;
         //   trace(count);
        }

        cout<<count<<endl;
    }
    return 0;
}
