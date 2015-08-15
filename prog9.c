#include<stdio.h>
main()
{
	int result,num;
	printf("enter the no.");
	scanf("%d",&num);
	result=increment(num);
	printf("the incremented number is %d",result);

}
int increment(int x)
{
	int increment;
	increment=x+1;
	return increment;
}

