#include<stdio.h>
int main()
{
	int n,i,mul=1;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
	}
		printf("the value of mul is%d\n",mul);
	
}
