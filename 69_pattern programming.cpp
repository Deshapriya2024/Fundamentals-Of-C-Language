//for loo
//pattern prigramming
#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=5;a++){
		for(i=1;i<=5;i++){
			if(a==1 || a==5){
				printf("1");
			}
			else if(i==3){
				printf("1");
			}
			else{
				printf(" ");
			}
		    }
			printf("\n");
		}	
	return 0;
}
