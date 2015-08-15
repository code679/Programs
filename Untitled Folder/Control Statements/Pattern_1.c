/* 
   Program to print the below pattern:

   For N value = 4
    
   1 
   10
   101
   1010
*/


#include<stdio.h>
main()
{
	int n,i,j;

	printf("Enter n:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}

		}
		printf("\n");
	}
}
