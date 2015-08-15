#include<stdio.h>
main()
{
	int i = 69;
	char ch = 'A';
	char str[] = "A";

	if(i == ch)
	{
		printf("A is 65\n");
	}
	else if(ch == *str)
	{
		printf("Charter constants are not equal to String literals\n");
	}
	else
	{
		printf("Fine!\n");
	}
}
