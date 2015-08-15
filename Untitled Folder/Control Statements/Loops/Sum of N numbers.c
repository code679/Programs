/* Sum of N numbers */
#include<stdio.h>
main()
{
	int n,i, sum;

	printf("Enter N:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		sum = n+i;
		printf("sum is %d\n",sum);
	}
}
