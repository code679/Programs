#include<stdio.h>
float foo();


int main()
{
	float x = foo();
	printf("returned value: %f", x);
	return 0;
}

float foo ()
{
	return 5;
}
