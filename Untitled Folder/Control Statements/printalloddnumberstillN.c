/* trace example 1*/
#include<stdio.h>
main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	while(n<=5)
	{
		if(n%2!=0)
		{
			n++;
		}
		printf("%d\n",n);
	}
}
