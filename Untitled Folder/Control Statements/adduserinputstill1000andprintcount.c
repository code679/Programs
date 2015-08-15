/* program to print all the numbers till 1000 and print count oftotal numbers entered*/
#include<stdio.h>
int main()
{
	int n, count=0, sum=0;

	do
	{
		printf("enter a number n: ");
		scanf("%d",&n);
		
		sum =  sum + n;
		count++;
	}while(sum<1000);

	printf("Total number of  values user entered is %d\n", count);
	return 0;
}
