//for loop
//pattern programming
//print 9 11 13 15
//      9 11 13 15
//      9 11 13 15
#include<stdio.h>
int main()
{
	int a,i;
	for(a=1;a<=3;a++){
		for(i=9;i<=15;i=i+2){
		printf("%d\t",i);
		}
		printf("\n");
	}
	
	return 0;
}
