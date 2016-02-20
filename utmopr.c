#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,k,sum=0;
		scanf("%ld %ld",&n,&k);
		
		while(n--)
		{
			long int s;
			scanf("%ld",&s);
			sum+=s;
		}
		
		if(sum%2!=0)
		printf("even\n");
		else
		{
			if(k==1)
			printf("odd\n");
			else
			printf("even\n");
		}
	}
	return 0;
}
