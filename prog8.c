#include<stdio.h>
int* storeArray();

int i;

void main()
{
	int *a ;

	a = (int *)storeArray();

	for(i=0;i<10;i++)
	{
		printf("\n%d", *(a+i));
	}
}

int * storeArray()
{
	static int elements[10];

	for(i=0;i<10;i++)
	{
		scanf("%d",&elements[i]);
	}
	return elements;
}
