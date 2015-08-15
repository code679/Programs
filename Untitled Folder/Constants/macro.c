#include<stdio.h>
#define PASSMARK 40
main()
{
	int marks;

	printf("Enter your Mathematics marks: ");
	scanf("%d", &marks);

	if(marks >= PASSMARK)
		printf("Congratulations!\n");
}
