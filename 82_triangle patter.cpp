//triangle pattern
#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=9;a=a+2){
		for(i=1;i<=a;i++){
			printf("%d ",a);
		}
		printf("\n");
	}
	return 0;
}
