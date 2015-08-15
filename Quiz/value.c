/* Printf is for prininting only, it is not used for reading input 
   scanf is the function that will read input from the user 
   */
#include<stdio.h>
main()
{
	int a=10;
	printf("Enter a value: ");
	scanf("%d", &a);
	printf("the value entered by the user is : %d\n", a);

}
