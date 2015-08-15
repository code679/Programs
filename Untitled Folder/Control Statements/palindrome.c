#include<stdio.h>
int main()
{
	int number, reverse=0, t;
	printf("Enter number: ");
	scanf("%d", &number);

	t = number; /* store the number in a temp variable for later use*/
	while(number>0)
	{
		reverse *= 10;
		reverse += number%10;
		number /= 10;
	}
	if(reverse == t)
	{
		printf("Its a palindrome\n");
	}
	else
	{
		printf("Not palindrome\n");
	}

	return 0;
}
