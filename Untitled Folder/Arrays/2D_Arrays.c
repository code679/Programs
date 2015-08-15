/* Program to explain 2D Arrays */

#include<stdio.h>
int main()
{
	/* here you are declaring a two dimensional array with 3r and 3colums*/
	int array[3][3], i,j;

	/* reading the elements of an array */
	printf("Please enter elements to store in an 3 X 3 matrix!\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &array[i][j]);
		}
	}

	/* printing the elements of an array */
	printf("The elements in the 3 X 3 matrix are!\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d   ",array[i][j]);
		}
		printf("\n");
	}
}
