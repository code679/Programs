/* token pasting */
#include<stdio.h>
#define BB(II) #II
#define FULLNAME(LN,FN) LN ## FN
main()
{
	char Apple[23] = "I am a String\n";
	int a1 = 10, a2 = 20, i;

	printf("%s", FULLNAME(App, le));

	for(i=0; i<2; i++)
	{
		printf("%d", FULLNAME(a, BB(i)));
	}
}
