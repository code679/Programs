/* signed vs. unsigned
   sizeof
 */

#include<stdio.h>
main()
{
	signed int i = -1;
	unsigned int a = 1;

	printf("size of signed int is : [%lu]Bytes\n", sizeof(i));
	printf("size of unsigned int is : [%lu]Bytes\n", sizeof(a));

}
