//triangle pattern
#include<stdio.h>
int main()
{
	int i,a;
	for(a=9;a<=12;a++){
		for(i=1;i<=a-8;i++){
			printf("%d ",a);
		}
		printf("\n");
	}
	
	return 0;
 } 
