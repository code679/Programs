#include<stdio.h>
main()
{
	int List[10], input,i, flag=0;
	printf("Enter 10 elements to store in an array: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&List[i]);
	}
	printf("Enter a number to check if it is present in the list\n");
	scanf("%d",&input);

	for(i=0;i<10;i++)
	{
		if(List[i]==input)
		{
			printf("The element '%d' is first found at the index '%d'\n", input, (i+1));
			flag = 1;
			break;
		}
	}
	if(flag == 0)printf("The element '%d' is not present in the list\n", input);
}
