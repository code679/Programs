/* Program to print 10th place of a digit */

#include<stdio.h>
int main()
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	number = number/10;
	number = number %10;

	printf("the result is: %d\n", number);

	return 0;

}
