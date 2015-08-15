/* A program to demonstrate while loop */
#include<stdio.h>
int main()
{
	int i = 1, j, n, x=1;

	printf("Enter the input for n: ");
	scanf("%d", &n);


	while (i<=n)
	{
		j = 0;
		while(j<n)
		{
			printf("%d",x);
			j++;
		}
		printf("\n");
		i++;
	}
//	printf("i value after the while loop is: %d\n", i);

	return 0;
}
