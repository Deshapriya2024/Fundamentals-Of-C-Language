//take a number and check that number is even odd or zero.
#include<stdio.h>
int main()
{
int num=7;
if(num%2==0){
	printf("even number");
}	
	else if(num%2!=0){
		printf("odd number");
	}
	else{
		printf("num==0");
	}
	return 0;
}
