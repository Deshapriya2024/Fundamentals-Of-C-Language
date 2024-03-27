//for loop
//pattern programming
//print U
#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=5;a++){
		for(i=1;i<=5;i++){
			if(i==1 || i==5 || a==5){
				printf("U");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
