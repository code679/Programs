/* Program to Demonsatrate break and continue; */
#include<stdio.h>
main()
{
	int i=0,n;
	printf("Enter n: ");
	scanf("%d",&n);

	for(i=1;i<n;i++)
	{
		if(i%10==0)
		{
			break;
			continue;
		}
		printf("%d\n",i);
	}
	printf("control comes immediatedly here if it is break");
	return 0;
}
