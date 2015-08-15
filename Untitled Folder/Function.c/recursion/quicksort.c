/* Quick Sort */
#include<stdio.h>
void swap(int, int);
void quicksort(int [],int,int);
int partition(int[],int,int);

int main()
{
	int L[]={10,12,13,14,16,989,78,858,5,58,45,4,89}, size, i=0;

	size = ((sizeof(L))/(sizeof(int)));

	quicksort(L,0,size);
	printf("The elements after sorting are: ");
	for(i=0;i<size;i++)
	{
		printf("%d\n",L[i]);
	}
	return 0;
}



quicksort(int List[], int start, int end)
{
	int pi;

	if(start<end)
	{
		pi = partition(List, start, end);
		quicksort(List, start, pi-1);
		quicksort(List, pi+1, end);
	}
}

int partition(int List[],int start, int end)
{
	int pivot = List[end-1];
	int partitionIndex=start,i=0;

	for(i=0;i<end;i++)
	{
		if( List[i] <= pivot )
		{ 
			swap( List[i], List[partitionIndex]);
			partitionIndex++;
		}
	}
	swap( List[partitionIndex], List[end-1]);
	return partitionIndex;
}

void swap(int x,int y)
{
	x = x+y;
	y = x-y;
	x = x-y;
}
