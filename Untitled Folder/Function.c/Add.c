#include<stdio.h>
int main()
{
	int num2, num1,sum;

	printf("Enter two number: ");
	scanf("%d%d",&num1, &num2);

	sum = Add(num1, num2);

	printf("The sum of the %d and %d is %d\n", num1, num2, sum);

	return 0;
}

int Add(int x,int y)
{
	int sum;
	sum = x + y;
	return sum;
}
