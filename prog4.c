#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			printf("not prime\n");
				return 0;
		}
	}
	printf("%d is a prime number\n",n);
}
