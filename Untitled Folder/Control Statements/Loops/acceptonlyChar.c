#include<stdio.h>
main()
{
	char ch;

	printf("please enter only chareters!\n");
	do
	{
		ch = getchar();	
	}while(!(ch>='0' &&ch<='9'));
}
