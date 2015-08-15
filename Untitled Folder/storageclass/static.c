#include<stdio.h>

int ival(void);
main()
{
	int a =	ival(&i);
	
	printf("%d\n",i);
}

int ival()
{
	static int i=1;
	return i;
}
