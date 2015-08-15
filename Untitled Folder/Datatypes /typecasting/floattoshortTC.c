#include<stdio.h>
main()
{
	float f = 899393.0;
	short s = *(short*)&f;
	printf("%d",s);
}

