//for loop
//pattern programming
//print @ @ @ @ @ 
//      * * * * *
//      @ @ @ @ @
//      1 1 1 1 1
//      @ @ @ @ @
//      * * * * *
//      @ @ @ @ @
#include<stdio.h>
int main()
{
	int a,i;
	for(a=1;a<=7;a++){
		for(i=1;i<=5;i++){
    if(a==4){
    	printf("1");
	}
	else if(a%2==0){
		printf("*");
	}
	else if(a%2!=0){
		printf("@");
	}
	}
	printf("\n");
    }
	return 0;
}
