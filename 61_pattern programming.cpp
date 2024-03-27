//for loop
//pattern programming
//print 11 12 13 14
//      11 12 13 14
//      11 12 13 14
#include<stdio.h>
int main()
{
	int a,i;
	for(a=1;a<=3;a++){
		for(i=11;i<=14;i++){
		printf("%d\t",i);
		}
		printf("\n");
	}
	
	return 0;
}
