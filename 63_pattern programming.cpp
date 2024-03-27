//for loop
//pattern programming
//print 9  9  9
//      11 11 11
//      13 13 13
#include<stdio.h>
int main()
{
	int a,i;
	for(a=9;a<=13;a=a+2){
		for(i=1;i<=3;i++){
		printf("%d\t",a);
		}
		printf("\n");
	}
	
	return 0;
}
