#include<stdio.h>
main()
{
	char ch;

	ch = getchar();

	while((ch == 'x'))
	{
		printf("The user entered %c", ch);
	}
}
