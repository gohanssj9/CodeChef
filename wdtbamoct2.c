#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int n;
        scanf("%d",&n);
        
        char a[1005],b[1005];
        scanf("%s %s",a,b);
        int i;
        int k=0,d[n+2],max,max2=-1;
        
        for(i=0;i<=n;i++)
        {
            scanf("%d",&d[i]);
            //if(
        }
        
        if(strcmp(a,b)==0)
        {
            printf("%d\n",d[n]);
            continue;
        }
        max=-1;
        
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==b[i])
            {
                k++;
                if(d[k]>max)
                max=d[k];
            }
        }
        
        if(d[0]>max)
        max=d[0];
        
        printf("%d\n",max);
   }
   return 0;
}
