#include<stdio.h>
main()
{
	int i,n;

	printf("Enter N value: ");
	scanf("%d",&n);

	i=0;
	while(i<=n)
	{
		printf("%d\n",i);
		i =	++i;
	}
}
