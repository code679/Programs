/*
1. A static variable inside a function keeps its value between invocations.
2. A static global variable or a function is "seen" only in the file it's declared in

   */
#include <stdio.h>

void foo()
{
	int a = 10;
	static int sa = 10;

	a += 5;
	sa += 5;

	printf("a = %d, sa = %d\n", a, sa);
}


int main()
{
	int i;

	for (i = 0; i < 10; ++i)
		foo();
}

/*
   This is useful for cases where a function needs to keep some state between invocations, and you don't want to use global variables. Beware, however, this feature should be used very sparingly - it makes your code not thread-safe and harder to understand.
 
 Is used widely as an "access control" feature. If you have a .c file implementing some functionality, it usually exposes only a few "public" functions to users. The rest of its functions should be made static, so that the user won't be able to access them. This is encapsulation, a good practice.  

uses:
You can return an array from a function
 
 */
