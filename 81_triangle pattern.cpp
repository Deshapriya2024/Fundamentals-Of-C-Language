//triangle pattern
#include<stdio.h>
int main()
{
	int i,a,n=1;
	for(a=1;a<=5;a++)
	{
		for(i=1;i<=a;i++){
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
	
	return 0;
}
