//for loop
//pattern programming
//print E
#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=5;a++){
		for(i=1;i<=5;i++){
			if(a==1 || a==3 || a==5 ||i==1){
				printf("E");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
