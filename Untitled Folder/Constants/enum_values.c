#include<stdio.h>

enum Grade {poor=30, avg=50, aavg=60, dist=80};

int main()
{
	if(1)
	{
		printf("if you are marks are less than %d, you need to retake the test\n",poor);
	}
	if(0)
	{
		printf("this will never be printed\n");
	}
	if(1)
	{
		printf("avg marks: %d\n",avg);
	}
	return 0;
}
