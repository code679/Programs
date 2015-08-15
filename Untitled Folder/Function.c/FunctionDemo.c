#include<stdio.h>
main()
{
	int number, result;
	printf("Enter a number: ");
	scanf("%d", &number);

	result = factorial(number);

	printf("The factorial of the %d is %d\n", number,result);
}

int factorial(int n)
{
	int fact = 1, i;

	for(i=1;i<=n;i++)
	{
		fact *= i;
	}

	return fact;
}
