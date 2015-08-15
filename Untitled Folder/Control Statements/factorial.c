/* Program to print the factorial of a Given Number */

#include<stdio.h>
main()
{
	int x;

	printf("Enter a number: %d\b ", scanf("%d", &x));
	printf("Factorial of %d is %d\n",x, f(x));
}
int f(int x)
{
	if(x==1)return 1;
	else return x*f(x-1);
}
