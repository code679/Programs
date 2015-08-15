/* Define Prime number: it has only two factors*/
#include<stdio.h>
main()
{
	int isPrime=1;//intially we assume every given number is prime
	int number;

	printf("Enter a number to check if it is Prime\n");
	scanf("%d",&number);

	/* we are writing this loop to check if there are more 
	   than two factors for the given number */
	for(i=2; i < number-1; i++)
	{
		if(number%i==0) 
		{
			isPrime = 0; // Not Prime, it has more than two factors!
			break;
		}
	}
	
	if(isPrime)
	{
		printf("hit\n");
	}
	else
	{
		printf("bit\n");
	}
}
