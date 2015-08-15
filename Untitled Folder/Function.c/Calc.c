#include<stdio.h>

//float Divide(int, int);

int main()
{
	int num2, num1;
	float div;

	printf("Enter two number: ");
	scanf("%d%d",&num1, &num2);

	div = (float)Divide(num1,num2);

	printf("The division of the %d and %d is %f\n", num1, num2, div);

	return 0;
}

float Divide(int x,int y)
{
	return (float)x/y;
}
