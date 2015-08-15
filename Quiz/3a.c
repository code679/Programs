// Post Increment has lower precedence than arthmetic operators
#include<stdio.h>
int main(){
	int i=1,j=0;
	j=2+2*i++;
	printf("j:%d\n i:%d\n",j,i);
	return 0;
}
