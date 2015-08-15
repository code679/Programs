#include<stdio.h>
main()
{
	int array[10],i,j;
	printf("enterthe 10 elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("the 10 numbers entered are: ");
	for(j=0;j<10;j++)
	{
		printf("%d\n",array[j]);
	}

	printf("the  address of the 10 elements");
	for(j=0;j<10;j++)
	{
		printf("Address of array[%d] is %u\n",j, &array[j]);
	}
}
