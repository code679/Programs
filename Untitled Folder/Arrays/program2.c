#include<stdio.h>
main()
{
	int i=0, n, array[100], sum=0;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter %d elements!\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		sum += array[i];
	}
	printf("The sum of all the elements in the array is : %d\n",sum);
}
