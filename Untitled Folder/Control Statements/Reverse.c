/* Program to reverse a given number */
#include<stdio.h>
int main()
{
	int number, reverse=0;
	printf("Enter number: ");
	scanf("%d", &number);

	while(number>0)
	{
		reverse *= 10;
		reverse += number%10;
		number /= 10;
	}
	printf("%d\n",reverse);

	return 0;
}
