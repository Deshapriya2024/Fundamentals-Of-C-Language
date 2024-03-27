//triangle pattern 
#include<stdio.h>
int main()
{
	int i,a;
	for(a=9;a>=1;a=a-2){
		for(i=1;i<=a-i+1;i++){
			printf("%d ",a);
		}
		printf("\n");
	}
	
	return 0;
 } 
