#include<stdio.h>
main()
{
	int i=0, j=0, n;
	printf("Enter n:");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(i%2 !=0) i++;
			printf("%d ",i);
		}
		printf("\n");
	}
}
