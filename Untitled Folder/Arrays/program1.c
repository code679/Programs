#include<stdio.h>
main()
{
	int array[9]={10,20,30,9,50,19,127,3,15},i,min=0,max=0;
	for(i=1;i<9;i++)
	{
		if(array[min]>array[i])
		{
			min=i;
		}
		
		if(array[max]<array[i])
		{
			max=i;
		}
	}
	printf("the min.element is %d\n",array[min]);
	printf("the max element is %d",array[max]);
}

