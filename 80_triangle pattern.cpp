//triangle pattern
#include<stdio.h>
int main()
{
	int i,a;
	for(a=12;a>=9;a--){
		for(i=1;i<=13-a;i++){
			printf("%d ",a);
		}
		printf("\n");
	}
	
	return 0;
 } 
