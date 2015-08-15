/* 
Program to demonstrate different data types present in c and their ranges
range of char 1B {-128 , 127}
range of short 1B {-128 , 127}
range of int  4B {-128 , 127}
range of char 1B {-128 , 127}

 */
#include<stdio.h>

int main()
{
	int i;
	short s;
	char ch;
	float f;
	double db;
	long l;
	long long ll;

	printf("the size of int is :[%ld]\n", sizeof(i));
	printf("the size of short is :[%ld]\n", sizeof(s));
	printf("the size of char is :[%ld]\n", sizeof(ch));
	printf("the size of float is :[%ld]\n", sizeof(f));
	printf("the size of double is :[%ld]\n", sizeof(db));
	printf("the size of long is :[%ld]\n", sizeof(l));
	printf("the size of long long is :[%ld]\n", sizeof(ll));
}
