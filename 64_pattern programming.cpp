//for loop
//pattern programming
//print 1 1 1 1 1
//      * * * * *
//      1 1 1 1 1
//      * * * * *
#include<stdio.h>
int main()
{
	int a,i;
	for(a=1;a<=5;a++){
		for(i=1;i<=5;i++){
	   if(a%2==0){
	   	printf("*");
	   }
	   else if(a%2!=0){
	   	printf("1");
	   }
	}
	printf("\n");
    }
	return 0;
}
