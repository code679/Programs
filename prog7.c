#include<stdio.h>
int main()
{
	int n,i,mul,m;
	printf("ener n and m");
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++)

	{
		mul=n*i;
		printf("%d*%d=%d\n",n,i,mul);
	}
}
