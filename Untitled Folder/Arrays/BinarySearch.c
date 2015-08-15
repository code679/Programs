/* program to implement binary search 
NOTE: Their is a bug in this program
Date: August 15, 2015
 */
#include<stdio.h>

void main()
{	
	int List[]={1,3,5,7,9,11,14,15,19,20,27,33,59};
	int i=0, x, size, isxpresent=0;

	printf("Enter a number: ");
	scanf("%d",&x);

	size = (sizeof(List)/sizeof(int));

	printf("the size of the list is %d\n", size);

	isxpresent = Binarysearch(List,0,size,x);
	printf("the value returned by search is: %d\n", isxpresent);

	if(isxpresent)
	{
		printf("The element is present at the position:%d\n",isxpresent);
	}
	else
	{
		printf("The element %d is not found!\n",x);
	}
}

int Binarysearch(int L[],int start, int end, int element)
{
	int mid = (start+end)/2;
	if(start<end)
	{
		if( element > L[mid] )
		{
			return Binarysearch(L,mid+1,end,element);
		}
		else if( element < L[mid] ) 
		{
			return Binarysearch(L,start,mid-1,element);
		}
		else if( element == L[mid])	return (mid+1);
	}
	else
	{
		printf("The element not found\n");
		return 0;
	}
}
