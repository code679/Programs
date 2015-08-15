#include<stdio.h>
int main()
{
	int i=0, array[10];

	printf("Enter 10 elements: ");

	for(i=0; i<10;i++)
	{
		scanf("%d",&array[i]);
	}

	printf("The elements in the array are: ");
	for(i=0; i<10;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");

	return 0;
}
