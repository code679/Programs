#include<stdio.h>
main()
{
	int n=3,i=0,j=0,k=0,sum=0;
	int	a[3][3]={1,2,3,4,5,6,7,8,9}; 
	int b[3][3]={1,0,0,0,1,0,0,0,1}, res[3][3]={0};

	/* product of two matrix(s) */
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				sum += a[i][k]*b[k][j];
			}
			res[i][j] = sum;
			sum = 0;
		}
	}

	/*the elements in the matrix*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
}
