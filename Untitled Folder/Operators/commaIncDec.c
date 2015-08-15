// comma sequence points in c
#include<stdio.h>
int main()
{
	int x = 10;
	int y = (x++, ++x);
	printf("%d", y);
	getchar();
	return 0;
}
