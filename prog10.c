#include<stdio.h>
main()
{
	int array[5]={5,25,3,2,9},result,num;
	
	result=biggest(array,5);
	printf("the biggest element in the array is %d",result);
}
int biggest(int x[],int size)
{
	int big=0,i;
	for(i=0;i<5;i++)
	{
		if(x[big]<x[i])
		{
			big=i;
		}
		
	}
	return big;
}
