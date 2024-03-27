//for loop
//pattern programming
//print v
#include<stdio.h>
int main()
{
	int i,a;
	for(a=1;a<=5;a++){
		for(i=1;i<=5;i++){
			if(a==1 && i==1 || a==1 && i==5 || a==2 && i==1 || a==2 && i==5|| a==3 && i==1 || a==3 && i==5 ||  a==4 && i==2 || a==4 && i==4 || a==5 && i==3 ){
				printf("V");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
