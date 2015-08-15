#include<stdio.h>
int main()
{
	int sum,list[]= {1,2,3,4,5};

	sum = Add(list,5);
	printf("The sum of the elements in the list: %d\n",sum);

	return 0;
}

int Add(int x[], int size)
{
	int sum=0, i;
	for(i=0;i<size;i++)
	{
		sum = sum+ x[i];
	}
	return sum;
}
