#include<stdio.h>
int main()
{
	int i,min=0, max=0, array[10];
	printf("enter 10 numbers: \n");
	for(i=0;i<10;i++)
	{
		scanf("%d", &array[i]);
	}
	for (i=1;i<10;i++)
	{
		if(array[min] > array[i])
		{
			min = i;
		}
		if(array[max] < array[i])
		{
			max = i;
		}
	}
	printf("the minimum element is : %d\n", array[min]);
	printf("the maximum element is : %d\n", array[max]);

}
