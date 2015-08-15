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
	if(n==1)return 1;
	else
	{
		return n*factorial(n-1);
	}
}
